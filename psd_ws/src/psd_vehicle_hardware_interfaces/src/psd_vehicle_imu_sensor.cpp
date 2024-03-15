#include "psd_vehicle_hardware_interfaces/psd_vehicle_imu_sensor.hpp"

#include <string>
#include <vector>

#include "rclcpp/logging.hpp"

#include "hardware_interface/types/hardware_interface_type_values.hpp"

namespace psd_vehicle_hardware_interfaces
{
CallbackReturn psd_vehicleImuSensor::on_init(const hardware_interface::HardwareInfo& hardware_info)
{
  RCLCPP_INFO(rclcpp::get_logger("psd_vehicleImuSensor"), "Initializing");

  if (hardware_interface::SensorInterface::on_init(hardware_info) != CallbackReturn::SUCCESS)
  {
    return CallbackReturn::ERROR;
  }

  imu_sensor_state_.resize(info_.sensors[0].state_interfaces.size(), 0.0);

  connection_timeout_ms_ = std::stoul(info_.hardware_parameters["connection_timeout_ms"]);
  connection_check_period_ms_ = std::stoul(info_.hardware_parameters["connection_check_period_ms"]);

  node_ = std::make_shared<rclcpp::Node>("imu_sensor_node");
  executor_.add_node(node_);
  executor_thread_ =
      std::make_unique<std::thread>(std::bind(&rclcpp::executors::MultiThreadedExecutor::spin, &executor_));

  return CallbackReturn::SUCCESS;
}

CallbackReturn psd_vehicleImuSensor::on_configure(const rclcpp_lifecycle::State&)
{
  RCLCPP_INFO(rclcpp::get_logger("psd_vehicleImuSensor"), "Configuring");
  return CallbackReturn::SUCCESS;
}

CallbackReturn psd_vehicleImuSensor::on_cleanup(const rclcpp_lifecycle::State&)
{
  RCLCPP_INFO(rclcpp::get_logger("psd_vehicleImuSensor"), "Cleaning up");
  return CallbackReturn::SUCCESS;
}

CallbackReturn psd_vehicleImuSensor::on_activate(const rclcpp_lifecycle::State&)
{
  RCLCPP_INFO(rclcpp::get_logger("psd_vehicleImuSensor"), "Activating");

  for (auto i = 0u; i < imu_sensor_state_.size(); i++)
  {
    imu_sensor_state_[i] = 0.0;
  }

  imu_subscriber_ = node_->create_subscription<Imu>("~/imu", rclcpp::SensorDataQoS(),
                                                    std::bind(&psd_vehicleImuSensor::imu_cb, this, std::placeholders::_1));

  std::shared_ptr<Imu> imu_msg;
  for (uint wait_time = 0; wait_time <= connection_timeout_ms_; wait_time += connection_check_period_ms_)
  {
    RCLCPP_WARN(rclcpp::get_logger("psd_vehicleImuSensor"), "Feedback message from imu wasn't received yet");
    received_imu_msg_ptr_.get(imu_msg);
    if (imu_msg)
    {
      RCLCPP_DEBUG(node_->get_logger(), "Subscriber and publisher are now active.");
      return CallbackReturn::SUCCESS;
    }

    rclcpp::sleep_for(std::chrono::milliseconds(connection_check_period_ms_));
  }

  RCLCPP_FATAL(node_->get_logger(), "Activation failed, timeout reached while waiting for feedback from imu");
  return CallbackReturn::ERROR;
}

CallbackReturn psd_vehicleImuSensor::on_deactivate(const rclcpp_lifecycle::State&)
{
  RCLCPP_INFO(rclcpp::get_logger("psd_vehicleImuSensor"), "Deactivating");
  cleanup_node();
  received_imu_msg_ptr_.set(nullptr);
  return CallbackReturn::SUCCESS;
}

CallbackReturn psd_vehicleImuSensor::on_shutdown(const rclcpp_lifecycle::State&)
{
  RCLCPP_INFO(rclcpp::get_logger("psd_vehicleImuSensor"), "Shutting down");
  cleanup_node();
  return CallbackReturn::SUCCESS;
}

CallbackReturn psd_vehicleImuSensor::on_error(const rclcpp_lifecycle::State&)
{
  RCLCPP_INFO(rclcpp::get_logger("psd_vehicleImuSensor"), "Handling error");
  cleanup_node();
  return CallbackReturn::SUCCESS;
}

std::vector<StateInterface> psd_vehicleImuSensor::export_state_interfaces()
{
  std::vector<StateInterface> state_interfaces;
  for (auto i = 0u; i < info_.sensors[0].state_interfaces.size(); i++)
  {
    state_interfaces.emplace_back(
        StateInterface(info_.sensors[0].name, info_.sensors[0].state_interfaces[i].name, &imu_sensor_state_[i]));
  }

  return state_interfaces;
}

void psd_vehicleImuSensor::cleanup_node()
{
  imu_subscriber_.reset();
}

void psd_vehicleImuSensor::imu_cb(const std::shared_ptr<Imu> msg)
{
  RCLCPP_DEBUG(node_->get_logger(), "Received imu message");
  received_imu_msg_ptr_.set(std::move(msg));
}

return_type psd_vehicleImuSensor::read(const rclcpp::Time&, const rclcpp::Duration&)
{
  std::shared_ptr<Imu> imu_msg;
  received_imu_msg_ptr_.get(imu_msg);

  RCLCPP_DEBUG(rclcpp::get_logger("psd_vehicleImuSensor"), "Reading imu state");

  if (!imu_msg)
  {
    RCLCPP_ERROR(rclcpp::get_logger("psd_vehicleImuSensor"), "Imu message wasn't received");
    return return_type::ERROR;
  }

  imu_sensor_state_[0] = imu_msg->orientation.x;
  imu_sensor_state_[1] = imu_msg->orientation.y;
  imu_sensor_state_[2] = imu_msg->orientation.z;
  imu_sensor_state_[3] = imu_msg->orientation.w;
  imu_sensor_state_[4] = imu_msg->angular_velocity.x;
  imu_sensor_state_[5] = imu_msg->angular_velocity.y;
  imu_sensor_state_[6] = imu_msg->angular_velocity.z;
  imu_sensor_state_[7] = imu_msg->linear_acceleration.x;
  imu_sensor_state_[8] = imu_msg->linear_acceleration.y;
  imu_sensor_state_[9] = imu_msg->linear_acceleration.z;

  return return_type::OK;
}

}  // namespace psd_vehicle_hardware_interfaces

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(psd_vehicle_hardware_interfaces::psd_vehicleImuSensor, hardware_interface::SensorInterface)