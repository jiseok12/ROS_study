#include "ros/ros.h" 
#include "std_msgs/Int32.h" 
#include <iostream>
 
void number_callback(const std_msgs::Int32::ConstPtr& msg) { 
   ROS_INFO("Received [%d]",msg->data);  
   //토픽이 도달할 때마다 함수는 값을 추출해 콘솔에 출력한다
} 

int main(int argc, char **argv) {  
   ros::init(argc, argv,"demo_topic_subscriber"); 
   ros::NodeHandle node_obj; 
   ros::Subscriber number_subscriber = node_obj.subscribe("/numbers",10,number_callback); 
   //구족에 필요한 토픽이름, 버퍼크기, 콜백함수 이른을 인자로 전달
   ros::spin(); 
   //토픽이 도달할때 까지 무한 대기를 한다
   return 0; 
} 