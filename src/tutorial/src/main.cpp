#include "ros/ros.h"
#include "std_msgs/String.h"

int main(int argc, char** argv) {
    ros::init(argc, argv, "publisher");
    ros::NodeHandle node;

    ros::Publisher chatter_pub = node.advertise<std_msgs::String>("publis", 10);

    ros::Rate loop_rate(10); 
    while (ros::ok()) {
        std_msgs::String msg;
        msg.data = "cluenya";

        chatter_pub.publish(msg);

        ros::spinOnce();

        loop_rate.sleep();
    }

    return 0;
}
