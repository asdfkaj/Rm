#include <rclcpp/rclcpp.hpp>
#include "kuang_interfaces/msg/kuangshi_array.hpp"
#include "kuang_interfaces/srv/caikuang.hpp"
#include <string>
#include <cmath>

using std::placeholders::_1;

class SubscribeNode : public rclcpp::Node
{
    public:
    SubscribeNode() : Node("kuanggong")
    {
        RCLCPP_INFO(this->get_logger(),"矿工已经创建完成！");
        //声明参数
        this->get_parameter<unsigned int>("kuangshi_num",kuangshi_num);
        sub_message = this->create_subscription<kuang_interfaces::msg::KuangshiArray>("kuangshi_msg", 10, std::bind(&SubscribeNode::topic_callback,this,_1));
        client_ = this->create_client<kuang_interfaces::srv::Caikuang>("Cai_Kuang");
    }

    private:
    rclcpp::Subscription<kuang_interfaces::msg::KuangshiArray>::SharedPtr sub_message;
    rclcpp::Client<kuang_interfaces::srv::Caikuang>::SharedPtr client_;
    //代表矿石数量
    unsigned int kuangshi_num = 3;
    //存放矿工距矿石长度的容器
    std::vector<float> d;
    //声明最短距离矿石所在下标,需要加1才是真实的矿石编号
    std::int64_t minPosition;
    //矿工的最初位置
    float my_x = 0.0;
    float my_y = 0.0;
    float my_z = 0.0;
    //矿石总价值
    float value_sum = 0;
    //对于订阅矿界发布矿石信息的回调函数
    void topic_callback(kuang_interfaces::msg::KuangshiArray message)
    {
        this->get_parameter("kuangshi_num",kuangshi_num);
        RCLCPP_INFO(this->get_logger(),"我已经成功订阅到了矿界的消息!");
        d.resize(kuangshi_num);
        for(unsigned int i = 0;i < kuangshi_num;i++)
        {
            d[i] = sqrt(pow((message.data_array[i].position.x - my_x),2) + pow((message.data_array[i].position.y - my_y),2) + pow((message.data_array[i].position.z - my_z),2));
        }
        minPosition = min_element(d.begin(),d.end()) - d.begin();      //返回最小值的下标
        std::int64_t target_id = message.data_array[minPosition].number.data;
        cai_kuang(target_id);
    }
    //对于服务中的response响应的回调函数
    void kuangshi_callback(rclcpp::Client<kuang_interfaces::srv::Caikuang>::SharedFuture  response)
    {
        kuang_interfaces::msg::KuangshiArray message;
        auto result = response.get();
        value_sum = value_sum + result->values;
        RCLCPP_INFO(this->get_logger(), "收到总价值为%f的矿石!", value_sum);
        //更新矿工的位置
        my_x = result->position.x;
        my_y = result->position.y;
        my_z = result->position.z;
        RCLCPP_INFO(this->get_logger(),"矿工现在的位置在:(%f,%f,%f),采矿成功！", my_x, my_y, my_z);
    }
    //建立对应的request请求，在订阅了矿石信息的回调函数里调用
    void cai_kuang(std::int64_t target_id)
    {
        kuang_interfaces::msg::KuangshiArray message;
        RCLCPP_INFO(this->get_logger(),"采矿去咯！");
        //等待服务端上线
        while (!client_->wait_for_service(std::chrono::seconds(1)))
        {
            //等待时检测rclcpp的状态
            if (!rclcpp::ok())
            {
                RCLCPP_ERROR(this->get_logger(), "等待服务的过程中被打断...");
                return;
            }
            RCLCPP_INFO(this->get_logger(), "等待服务端上线中");
        }
        //声明请求
        auto request = std::make_shared<kuang_interfaces::srv::Caikuang_Request>();

        request->id = target_id;
        RCLCPP_INFO(this->get_logger(),"本次采矿序号为%ld",target_id);
        //发送请求
        client_->async_send_request(request,std::bind(&SubscribeNode::kuangshi_callback, this, _1));
    } 
};

int main(int argc,char **argv)
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<SubscribeNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}