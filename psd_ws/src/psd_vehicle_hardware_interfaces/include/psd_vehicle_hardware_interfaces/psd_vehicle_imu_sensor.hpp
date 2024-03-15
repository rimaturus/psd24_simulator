#ifndef psd_vehicle_HARDWARE_INTERFACES__psd_vehicle_IMU_SENSOR_HPP_
#define psd_vehicle_HARDWARE_INTERFACES__psd_vehicle_IMU_SENSOR_HPP_

#include "psd_vehicle_hardware_interfaces/visibility_control.hpp"

#include "rclcpp_lifecycle/node_interfaces/lifecycle_node_interface.hpp"
#include "rclcpp_lifecycle/state.hpp"
#include "rclcpp/rclcpp.hpp"

#include "hardware_interface/types/hardware_interface_return_values.hpp"
#include "hardware_interface/sensor_interface.hpp"
#include "hardware_interface/handle.hpp"

#include "realtime_tools/realtime_box.h"
#include "realtime_tools/realtime_buffer.h"
#include "realtime_tools/realtime_publisher.h"

#include "sensor_msgs/msg/imu.hpp"

namespace psd_vehicle_hardware_interfaces
{
using return_type = hardware_interface::return_type;
using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;
using StateInterface = hardware_interface::StateInterface;
using CommandInterface = hardware_interface::CommandInterface;

using Imu = sensor_msgs::msg::Imu;

class psd_vehicleImuSensor : public hardware_interface::SensorInterface
{
public:
  RCLCPP_SHARED_PTR_DEFINITIONS(psd_vehicleImuSensor)

  psd_vehicle_HARDWARE_INTERFACES_PUBLIC
  CallbackReturn on_init(const hardware_interface::HardwareInfo& hardware_info) override;

  psd_vehicle_HARDWARE_INTERFACES_PUBLIC
  CallbackReturn on_configure(const rclcpp_lifecycle::State& previous_state) override;

  psd_vehicle_HARDWARE_INTERFACES_PUBLIC
  CallbackReturn on_cleanup(const rclcpp_lifecycle::State& previous_state) override;

  psd_vehicle_HARDWARE_INTERFACES_PUBLIC
  CallbackReturn on_activate(const rclcpp_lifecycle::State& previous_state) override;

  psd_vehicle_HARDWARE_INTERFACES_PUBLIC
  CallbackReturn on_deactivate(const rclcpp_lifecycle::State& previous_state) override;

  psd_vehicle_HARDWARE_INTERFACES_PUBLIC
  CallbackReturn on_shutdown(const rclcpp_lifecycle::State& previous_state) override;

  psd_vehicle_HARDWARE_INTERFACES_PUBLIC
  CallbackReturn on_error(const rclcpp_lifecycle::State& previous_state) override;

  psd_vehicle_HARDWARE_INTERFACES_PUBLIC
  std::vector<StateInterface> export_state_interfaces() override;

  psd_vehicle_HARDWARE_INTERFACES_PUBLIC
  return_type read(const rclcpp::Time& time, const rclcpp::Duration& period) override;

protected:
  void cleanup_node();

  realtime_tools::RealtimeBox<std::shared_ptr<Imu>> received_imu_msg_ptr_{ nullptr };

  rclcpp::Subscription<Imu>::SharedPtr imu_subscriber_ = nullptr;

  std::vector<double> imu_sensor_state_;

  bool subscriber_is_active_ = false;

  std::shared_ptr<rclcpp::Node> node_;

  void imu_cb(const std::shared_ptr<Imu> msg);
  rclcpp::executors::MultiThreadedExecutor executor_;
  std::unique_ptr<std::thread> executor_thread_;

  uint connection_check_period_ms_;
  uint connection_timeout_ms_;
};

}  // namespace psd_vehicle_hardware_interfaces

#endif  // psd_vehicle_HARDWARE_INTERFACES__psd_vehicle_IMU_SENSOR_HPP_