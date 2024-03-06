import rclpy
from rclpy.node import Node
import cv2
import numpy as np
import math

from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist
from cv_bridge import CvBridge


# Soglie per il bianco
lower_white = np.array([0,160,10])
upper_white = np.array([255,255,255])

# PutText on image
font = cv2.FONT_HERSHEY_SIMPLEX
org = (10,30)
org1 = (10,50)
org2 = (10,70)
fontScale = 0.65
color = (0,0,255) # BGR
thickness = 1


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subCamera = self.create_subscription(Image,'/camera_IMAGE',self.camera_callback,10)
        self.subTwist = self.create_subscription(Twist,'/vehicle_blue_twist',self.twist_callback,10)
        #self.subPose = self.create_subscription(PoseArray,'/vehicle_blue_pose',self.pose_callback,10)
        self.subCamera  # prevent unused variable warning

        # inizializzo velocità lineare e angolare che verranno mostrate poi sull'immagine
        self.linearX = 0
        self.angularZ = 0

        # bridge ros2-opencv
        self.br = CvBridge()

    def euler_from_quaternion(self,x, y, z, w):
        """
        Convert a quaternion into euler angles (roll, pitch, yaw)
        roll is rotation around x in radians (counterclockwise)
        pitch is rotation around y in radians (counterclockwise)
        yaw is rotation around z in radians (counterclockwise)
        """
        t0 = +2.0 * (w * x + y * z)
        t1 = +1.0 - 2.0 * (x * x + y * y)
        roll_x = math.atan2(t0, t1)
    
        t2 = +2.0 * (w * y - z * x)
        t2 = +1.0 if t2 > +1.0 else t2
        t2 = -1.0 if t2 < -1.0 else t2
        pitch_y = math.asin(t2)
    
        t3 = +2.0 * (w * z + x * y)
        t4 = +1.0 - 2.0 * (y * y + z * z)
        yaw_z = math.atan2(t3, t4)
        yaw_z = round(yaw_z,2)
    
        return roll_x, pitch_y, yaw_z # in radianti\

    def twist_callback(self,msg):
        self.linearX = msg.linear.x
        self.angularZ = msg.angular.z

    # la posa diverge
    #def pose_callback(self,msg):
        # x = msg.poses.orientation.x
        # y = msg.poses.orientation.y
        # z = msg.poses.orientation.z
        # w = msg.poses.orientation.w

        # _,_,yaw = self.euler_from_quaternion(x,y,z,w)

        #print(yaw)
        #eulerAngles = pd.DataFrame(data=rot_euler,)

    def camera_callback(self, msg):
        if not msg.data:
            print("Immagine non ricevuta!")
        # convert image from msgImage to opencv format
        current_frame = self.br.imgmsg_to_cv2(msg)
        # convert image from the default format of opnecv (BGR) to RGB 
        rgbImage = cv2.cvtColor(current_frame, cv2.COLOR_BGR2RGB)
        self.filteringImage(rgbImage)
        
    def filteringImage(self,image):
        hls = cv2.cvtColor(image,cv2.COLOR_RGB2HLS)
        mask = cv2.inRange(hls,lower_white,upper_white)
        hls_result = cv2.bitwise_and(image,image,mask)  
        gray = cv2.cvtColor(hls_result,cv2.COLOR_BGR2GRAY)
        ret,thresh = cv2.threshold(gray,160,255,cv2.THRESH_BINARY)

        # put text in image
        thresh = cv2.putText(thresh,f'Shape {image.shape}',org, font, fontScale, color, thickness)
        thresh = cv2.putText(thresh,f'Vel Lin X: {self.linearX}',org1, font, fontScale, color, thickness)
        thresh = cv2.putText(thresh,f'Vel Ang Z: {self.angularZ}',org2, font, fontScale, color, thickness)
        cv2.imshow("camera",image)
        cv2.imshow("binary",thresh)
        cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)
    # instance of class MinimalSubscriber
    minimal_subscriber = MinimalSubscriber()

    # infinite loop
    rclpy.spin(minimal_subscriber)

    # destroy node
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()