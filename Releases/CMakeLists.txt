cmake_minimum_required(VERSION 3.10)

project(LinuxCalc CXX)

add_executable(linuxcalc linuxcalc_1.1.cpp)
target_link_libraries(linuxcalc m)
