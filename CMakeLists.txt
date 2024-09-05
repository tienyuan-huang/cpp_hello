cmake_minimum_required(VERSION 3.10)
project(hello)

# Set the C++ standard you wish to use (you don't have to use C++11)
set(CMAKE_CXX_STANDARD 11)

# Add your source files
add_executable(hello hello.cpp)
install(TARGETS hello DESTINATION ${INSTALL_DIR})