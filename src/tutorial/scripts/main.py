import rospy
from std_msgs.msg import String

def callback(data):
    rospy.loginfo(data.data)

def my_subscriber():
    rospy.init_node('subscriber', anonymous=True)

    rospy.Subscriber('publish', String, callback)

    rospy.spin()

if __name__ == '__main__':
    my_subscriber()
