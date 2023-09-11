#include <rclcpp/rclcpp.hpp>
#include "kuang_interfaces/msg/kuangshi_array.hpp"
#include "kuang_interfaces/msg/kuangshi.hpp"
#include "kuang_interfaces/srv/caikuang.hpp"
#include <string>
#include <std_msgs/msg/string.hpp>

#include <cstdlib>
#include <ctime>

using namespace std::chrono_literals;       //时间在c++中的具体表现形式的库，主要在create_wall_timer（）函数中的500ms处有用

using std::placeholders::_1;
using std::placeholders::_2;

class PublishNode : public rclcpp::Node
{
    public:
    PublishNode() : Node("kuangjie")
    {
        RCLCPP_INFO(this->get_logger(),"矿界已经创建完成！");
        //声明参数
        this->declare_parameter<std::int64_t>("kuangshi_num",kuangshi_num);
        this->get_parameter("kuangshi_num",kuangshi_num);
        this->publish_node();
        //实例化发布者
        pub_messgae = this->create_publisher<kuang_interfaces::msg::KuangshiArray>("kuangshi_msg",10);
        //使用timer函数达到延时发布修改的话题信息的目的
        this->timer_();
        service_ = this->create_service<kuang_interfaces::srv::Caikuang>("Cai_Kuang",std::bind(&PublishNode::cai_kuang_callback, this, _1, _2),
                                                                        rmw_qos_profile_services_default);
    }
    private:
    //声明发布者
    rclcpp::Publisher<kuang_interfaces::msg::KuangshiArray>::SharedPtr  pub_messgae;
    rclcpp::Service<kuang_interfaces::srv::Caikuang>::SharedPtr service_;  //声明服务端
    //使用参数声明矿界的矿石个数
    std::int64_t kuangshi_num = 3;
    //定义一个全局的变量，存储矿石信息，其中使用的类型是用的自己定义的接口
    std::vector<kuang_interfaces::msg::Kuangshi> vec;
    kuang_interfaces::msg::KuangshiArray vec1;
    std::int64_t target_id;
    //该函数本来是打算实现循环发布消息从而消除矿工已经采取到的矿石，但是查了很久资料还是没有实现该线程不阻塞类中的构造函数，所以最后只实现了采取一个矿石
    void timer_()
    {
        pub_messgae->publish(vec1);
        //std::this_thread::sleep_for(std::chrono::seconds(100));
        /*while(kuangshi_num > 0)
        {
            kuangshi_num--;
            RCLCPP_INFO(this->get_logger(),"%ld",target_id);
        }*/
    }
    //使用全局的容器存储矿界生成的矿石信息，并用于发布话题的回调函数
    void publish_node()
    {
        kuang_interfaces::msg::KuangshiArray message;
        //初始化n个矿石信息
        this->get_parameter("kuangshi_num",kuangshi_num);
        double jin_value = 80.8;
        double yin_value = 40.4;
        message.data_array.resize(kuangshi_num);                                        //记住c++11里定义的数组都是使用的vector，所以在使用之前一定使用resize函数分配其内存，否则会出现segementation fault，即超限
        RCLCPP_INFO(this->get_logger(),"该矿界的矿石个数为：%ld",message.data_array.size());
        rclcpp::Rate loop_rate(1);                                                      //通过在for循环里延时1s实现生成随机位置不同的点
        for(std::int64_t i = 0;i<kuangshi_num;i++)
        {
            if(i%2 == 1)                                                                //如果序号为奇数，则生成金矿
            {
                message.data_array[i].number.data = i + 1;                                  //记住在使用ros自带的接口包或者自定义的接口包时，他初始化的对象是一个类，需要再使用一个“.”调用里面的数据所以这也是为什么数据最后还要加一个.data的原因
                message.data_array[i].kind.data = "金矿";
                //生成随机数的种子
                srand(time(nullptr));//设置随机数种子，使每次产生的随机序列不同
                message.data_array[i].position.x = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/10));              //生成0～10的随即浮点数
                message.data_array[i].position.y = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/10));              //生成0～10的随即浮点数
                message.data_array[i].position.z = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/10));              //生成0～10的随即浮点数
                message.data_array[i].value.data = jin_value;
            }
            else
            {
                message.data_array[i].number.data = i + 1;
                message.data_array[i].kind.data = "银矿";
                //生成随机数的种子
                srand(time(nullptr));//设置随机数种子，使每次产生的随机序列不同
                message.data_array[i].position.x = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/10));              //生成0～10的随即浮点数
                message.data_array[i].position.y = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/10));              //生成0～10的随即浮点数
                message.data_array[i].position.z = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX/10));              //生成0～10的随即浮点数
                message.data_array[i].value.data = yin_value;          
            }
            RCLCPP_INFO(this->get_logger(),"position.x = %f,positon.y = %f,position.z = %f",message.data_array[i].position.x,message.data_array[i].position.y,message.data_array[i].position.z);
            loop_rate.sleep();
        }                                             
        vec.resize(kuangshi_num);
        vec = message.data_array;
        vec1 = message;
    }
    //对于request响应的回调函数
    void cai_kuang_callback(const kuang_interfaces::srv::Caikuang::Request::SharedPtr request,
    const kuang_interfaces::srv::Caikuang::Response::SharedPtr response)
    {
        RCLCPP_INFO(this->get_logger(),"收到了一个采集%ld号矿石的请求",request->id);
        (response->position).x = vec[request->id - 1].position.x;
        (response->position).y = vec[request->id - 1].position.y;
        (response->position).z = vec[request->id - 1].position.z;
        response->values = vec[request->id - 1].value.data;
        target_id = request->id;
    }
};

int main(int argc,char **argv)
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<PublishNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}