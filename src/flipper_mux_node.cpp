#include "flipper_mux/flipper_mux.hpp"
#include <memory>

int main(int argc, char **argv){
  rclcpp::init(argc, argv);

  auto joy_mux_node = std::make_shared<flipper_mux::FlipperMux>();
  
  joy_mux_node->init();

  rclcpp::spin(joy_mux_node);

  rclcpp::shutdown();

  return EXIT_SUCCESS;
}