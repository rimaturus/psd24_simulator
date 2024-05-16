## Build instructions
# Build steps:

Build libzmq via cmake. This does an out of source build and installs the build files

1) download and unzip the lib, cd to directory
2) mkdir build
3) cd build
4) cmake ..
5) sudo make -j4 install

Build cppzmq via cmake. This does an out of source build and installs the build files

1) download and unzip the lib, cd to directory
2) mkdir build
3) cd build
4) cmake ..
5) sudo make -j4 install

Build cppzmq via vcpkg. This does an out of source build and installs the build files

1) git clone https://github.com/Microsoft/vcpkg.git
2) cd vcpkg
3) ./bootstrap-vcpkg.sh # bootstrap-vcpkg.bat for Powershell
4) ./vcpkg integrate install
5) ./vcpkg install cppzmq

Using this:

A cmake find package scripts is provided for you to easily include this library. Add these lines in your CMakeLists.txt to include the headers and library files of cpp zmq (which will also include libzmq for you).

#find cppzmq wrapper, installed by make of cppzmq
find_package(cppzmq)
target_link_libraries(*Your Project Name* cppzmq)
