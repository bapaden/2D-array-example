cmake_minimum_required(VERSION 2.6)
project(double_array_nonsense)

set(CMAKE_BUILD_TYPE Debug)

add_executable(double_array_nonsense main.cpp)

install(TARGETS double_array_nonsense RUNTIME DESTINATION bin)
