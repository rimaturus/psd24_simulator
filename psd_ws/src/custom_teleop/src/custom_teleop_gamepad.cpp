#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64_multi_array.hpp"
#include <termios.h>
#include <unistd.h>
#include <iostream>
#include <fcntl.h>
#include <algorithm>

#include <SDL2/SDL.h>   // gamepad lib

class GamepadTeleopPublisher : public rclcpp::Node
{
public:
    GamepadTeleopPublisher() : Node("custom_teleop_gamepad")
    {
        this->declare_parameter<std::string>("drive_topic", "/effort_controller/commands");
        this->declare_parameter<std::string>("steer_topic", "/position_controller/commands");
        
        publisher_drive_ = this->create_publisher<std_msgs::msg::Float64MultiArray>(
            this->get_parameter("drive_topic").as_string(), 10);

        publisher_steer_ = this->create_publisher<std_msgs::msg::Float64MultiArray>(
            this->get_parameter("steer_topic").as_string(), 10);

        RCLCPP_INFO(this->get_logger(), "Gamepad Teleop node initialized, publishing to %s and %s", 
                    this->get_parameter("drive_topic").as_string().c_str(),
                    this->get_parameter("steer_topic").as_string().c_str());
    }

    ~GamepadTeleopPublisher()
    {
        SDL_Quit();
    }

    void start()
    {
        run();
    }


private:
    rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr publisher_drive_;
    rclcpp::Publisher<std_msgs::msg::Float64MultiArray>::SharedPtr publisher_steer_;

    double max_steer = 30.0 * M_PI / 180.0;
    double max_torque = 0.0;
    const double step_torque = 0.2;

    bool prev_state_Y = false;
    bool prev_state_A = false;

    // Mapping parameters
    double axis_min = -32767;
    double axis_max = 32767;

    void publishDrive(std::vector<double> data)
    {
        auto message = std_msgs::msg::Float64MultiArray();
        message.data = data;
        publisher_drive_->publish(message);
    }

    void publishSteer(std::vector<double> data)
    {
        auto message = std_msgs::msg::Float64MultiArray();
        message.data = data;
        publisher_steer_->publish(message);
    }

    double mapValue(double x, double in_min, double in_max, double out_min, double out_max) {
        return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
    }


    int readAxisValue(int axis_number) {
        // Initialize SDL
        if (SDL_Init(SDL_INIT_JOYSTICK) < 0) {
            RCLCPP_ERROR(this->get_logger(), "SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
            return 0;
        }

        // Check if a joystick is connected
        if (SDL_NumJoysticks() < 1) {
            RCLCPP_WARN(this->get_logger(), "No joysticks connected!");
            return 0;
        }

        // Open the first joystick
        SDL_Joystick* joystick = SDL_JoystickOpen(0);
        if (joystick == nullptr) {
            RCLCPP_ERROR(this->get_logger(), "Could not open joystick! SDL_Error: %s\n", SDL_GetError());
            return 0;
        }

        // Check if the requested axis is valid
        if (axis_number < 0 || axis_number >= SDL_JoystickNumAxes(joystick)) {
            RCLCPP_ERROR(this->get_logger(), "Invalid axis number: %d\n", axis_number);
            SDL_JoystickClose(joystick);
            return 0;
        }

        int raw_value = SDL_JoystickGetAxis(joystick, axis_number);

        SDL_JoystickClose(joystick);

        return raw_value;
    }

    bool readButtonState(int button_number) {
        // Ensure SDL is initialized
        if (SDL_Init(SDL_INIT_JOYSTICK) < 0) {
            RCLCPP_ERROR(this->get_logger(), "SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
            return false;
        }

        // Check if a joystick is connected
        if (SDL_NumJoysticks() < 1) {
            RCLCPP_WARN(this->get_logger(), "No joysticks connected!");
            return false;
        }

        // Open the first joystick
        SDL_Joystick* joystick = SDL_JoystickOpen(0);
        if (joystick == nullptr) {
            RCLCPP_ERROR(this->get_logger(), "Could not open joystick! SDL_Error: %s\n", SDL_GetError());
            return false;
        }

        // Check if the button number is valid
        if (button_number < 0 || button_number >= SDL_JoystickNumButtons(joystick)) {
            RCLCPP_ERROR(this->get_logger(), "Invalid button number: %d\n", button_number);
            SDL_JoystickClose(joystick);
            return false;
        }

        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_JOYBUTTONDOWN || event.type == SDL_JOYBUTTONUP) {
                // Handle button events (optional)
            }
        }

        bool button_pressed = SDL_JoystickGetButton(joystick, button_number);

        SDL_JoystickClose(joystick);

        return button_pressed;
    }

    void run()
    {
        rclcpp::Rate loop_rate(1000);
        while (rclcpp::ok())
        {  
            int top_button_Y = readButtonState(3);
            if(top_button_Y && !prev_state_Y){   //debouncing
                max_torque += step_torque;
            }
            prev_state_Y = top_button_Y;

            int bottom_button_A = readButtonState(0);
            if(bottom_button_A && !prev_state_A){   //debouncing
                max_torque -= step_torque;
            }
            prev_state_A = bottom_button_A;

            int R2_value = readAxisValue(4);
            double torque = mapValue(R2_value, axis_min, axis_max, 0, max_torque);

            int L2_value = readAxisValue(5);
            double brake_torque = mapValue(L2_value, axis_min, axis_max, 0, max_torque);
            torque -= brake_torque;

            // std::cout << "R2:\t" << R2_value << std::endl << "L2:\t" << L2_value << std::endl << std::flush;

            int raw_axis_value_2 = readAxisValue(2);
            double steering_angle = mapValue(raw_axis_value_2, axis_min, axis_max, -max_steer, max_steer);

            publishDrive({torque, torque, torque, torque});
            publishSteer({-steering_angle, -steering_angle});
            

            std::cout << "\033[2J\033[H";
            std::cout << "Custom_teleop_gamepad by rimaturus" << std::endl << std::endl << std::flush;

            std::cout << "How to use:\t" << std::flush;
            std::cout << "Top button (Y) to increase max torque" << std::endl << std::flush;
            std::cout << "Bottom button (A) to decrease max torque" << std::endl << std::flush;
            std::cout << "Right stick for steering" << std::endl << std::flush;
            std::cout << "Use trigger R2 to apply positive toque to all wheels (linear map with analog trigger from 0 to max torque)" << std::endl << std::flush;
            std::cout << "Use trigger L2 to apply negative toque to all wheels (linear map with analog trigger from 0 to -max torque)" << std::endl << std::flush;
            std::cout << "The torque sent to wheels is the difference between the two" << std::endl << std::endl << std::flush;

            std::cout << "Steer: [-30°, +30°]\n" << std::endl << std::endl << std::flush;
            
            std::cout << "Actual Torque:\t" << torque << std::endl << std::flush;
            std::cout << "Actual Max Torque:\t" << max_torque << std::flush;
            std::cout << "\nActual Steering_angle:\t" << steering_angle << std::flush;

            loop_rate.sleep();
        }
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<GamepadTeleopPublisher>();
    node->start();
    rclcpp::shutdown();
    return 0;
}

