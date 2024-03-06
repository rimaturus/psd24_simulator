import tkinter as tk
from tkinter import ttk
import subprocess
import rclpy
from geometry_msgs.msg import Twist
from std_msgs.msg import Float64

class Ros2Node(tk.Tk):
    def __init__(self):
        super().__init__()

        self.title("ROS2 Command Publisher")

        rclpy.init()
        self.node = rclpy.create_node('ros2_gui_node')

        self.publisher = self.node.create_publisher(Twist, '/vehicle_blue_twist', 10)

        self.steering_label = ttk.Label(self, text="Angular Z:")
        self.steering_scale = ttk.Scale(self, from_=-1, to=1, orient=tk.HORIZONTAL, length=200, command=self.publish_command)
        self.steering_scale.set(0.0)

        self.x_slider_label = ttk.Label(self, text="Linear X:")
        self.x_slider = ttk.Scale(self, from_=-1, to=1, orient=tk.HORIZONTAL, length=200, command=self.publish_command)
        self.x_slider.set(0.0)

        self.reset_button = ttk.Button(self, text="Reset Defaults", command=self.reset_defaults)

        self.x_slider_label.pack(pady=10)
        self.x_slider.pack(pady=10)
        self.steering_label.pack(pady=10)
        self.steering_scale.pack(pady=10)
        self.reset_button.pack(pady=20)

        self.protocol("WM_DELETE_WINDOW", self.on_close)
        self.after(1, self.ros_spin)
        self.mainloop()

    def publish_command(self, _=None):
        x_value = self.x_slider.get()
        angular_z_value = self.steering_scale.get()

        twist_msg = Twist()
        twist_msg.linear.x = x_value
        twist_msg.angular.z = angular_z_value

        self.publisher.publish(twist_msg)

    def reset_defaults(self):
        self.x_slider.set(0.0)
        self.steering_scale.set(0.0)

        self.publish_command()

    def ros_spin(self):
        rclpy.spin_once(self.node, timeout_sec=0.01)
        self.after(10, self.ros_spin)

    def on_close(self):
        self.node.destroy_node()
        rclpy.shutdown()
        self.destroy()

def main():
    app = Ros2Node()
