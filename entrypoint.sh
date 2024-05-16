#!/bin/bash

set -e
source /opt/ros/jazzy/setup.bash

echo "Provided arguments: $@"
exec $@
