#!/usr/bin/env python3
import subprocess
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Pose

class FakeSlamNode(Node):
    def __init__(self):
        super().__init__('fake_slam_node')
        self.pose_publisher_ = self.create_publisher(Pose, 'psd_vehicle_pose', 10)  # Publish on 'psd_vehicle_pose'
        self.create_timer(0.01, self.publish_pose)  # Publish at 100 Hz

    def publish_pose(self):
        command = 'gz topic -e -t /world/track/dynamic_pose/info -n 1| grep "psd_vehicle" -A 12'
        output = subprocess.check_output(command, shell=True, text=True)

        # Extract position and orientation using string slicing and splitting
        pose_msg = Pose()

        try:
            pose_msg.position.x = float(output.split('x: ')[1].split('\n')[0])
            pose_msg.position.y = float(output.split('y: ')[1].split('\n')[0])
            pose_msg.position.z = float(output.split('z: ')[1].split('\n')[0])
            
            pose_msg.orientation.x = float(output.split('x: ')[2].split('\n')[0])
            pose_msg.orientation.y = float(output.split('y: ')[2].split('\n')[0])
            pose_msg.orientation.z = float(output.split('z: ')[2].split('\n')[0])
            pose_msg.orientation.w = float(output.split('w: ')[1].split('\n')[0])

            self.pose_publisher_.publish(pose_msg)
            self.get_logger().info("Updated pose\n")
        except (IndexError, ValueError):
            self.get_logger().error("Failed to parse pose data from Gazebo.\n\nSTART THE SIMULATION")

def main(args=None):
    rclpy.init(args=args)
    node = FakeSlamNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
