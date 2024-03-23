file(REMOVE_RECURSE
  "joint_trajectory_controller_parameters/include/joint_trajectory_controller_parameters.hpp"
  "joint_trajectory_controller_parameters/include/validate_jtc_parameters.hpp"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/joint_trajectory_controller_parameters.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
