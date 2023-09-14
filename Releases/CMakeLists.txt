cmake_minimum_required(VERSION 3.10)

project(LinuxCalc C)

add_executable(linuxcalc linuxcalc_1.0.c)
target_link_libraries(linuxcalc m)
