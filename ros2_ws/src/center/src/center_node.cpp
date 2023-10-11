#include <iostream>
#include <functional>
#include <memory>
#include "std_msgs/msg/string.hpp"
#include "rclcpp/rclcpp.hpp"
#include <cstdlib>
#include <cinttypes>
#include <string>
#include "custom_test_msgs/srv/add_three_ints.hpp"
#include "custom_message_unity/msg/custom_unity.hpp"

using namespace std::chrono_literals;
using namespace custom_test_msgs::srv;
using namespace custom_message_unity::msg;

class CenterNode : public rclcpp::Node {
public:
    CenterNode() : Node("center_node") {  // rclcpp::Nodeを継承してsubscriber_nodeというNodeを作成
    
    auto topic_callback = [this](const custom_message_unity::msg::CustomUnity msg) -> void {
        RCLCPP_INFO(this->get_logger(),"got message");
        
            auto message = custom_message_unity::msg::CustomUnity();
            message.f1 = msg.f1;
            message.f2 = msg.f2;
            message.f3 = 1;
            this->publisher_->publish(message);  // publishする

    };  // topicにメッセージが送られてきた時に呼び出されるcallback

    //publisherの作成：第1引数の文字列はトピック名、第2引数の数値はQoS
    //<std_msgs::msg::String> でトピックのデータ型を指定
    publisher_ = this->create_publisher<custom_message_unity::msg::CustomUnity>("centerCommand", 10);
    subscription_ = this->create_subscription<custom_message_unity::msg::CustomUnity>("controllerCommand", 10, topic_callback);  // topicをsubscribeする為の設定
    
    }
private:
    // 上記の動作に必要なprivateメンバ
    rclcpp::Subscription<custom_message_unity::msg::CustomUnity>::SharedPtr subscription_;
    rclcpp::Publisher<custom_message_unity::msg::CustomUnity>::SharedPtr publisher_;  //トピックのデータ型を併記
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<CenterNode>());
    rclcpp::shutdown();
    return 0;
}
