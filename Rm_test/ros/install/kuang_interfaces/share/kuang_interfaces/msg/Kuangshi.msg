#也不知道为什么整个文件路径是std_msgs/msg/Int64但是这里不加msg，我猜测可能是因为格式就是包名+文件名
#矿石编号,记住这里调用的是std_msgs/Int64标准包生成的是一个名为number的类，如果在函数中要初始化还应在number后加上.data调用类里的数据data
std_msgs/Int64  number
#矿石类型
std_msgs/String kind
#矿石所在位置
geometry_msgs/Point position
#矿石价值
std_msgs/Float64 value