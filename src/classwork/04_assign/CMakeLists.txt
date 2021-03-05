cmake_minimum_required (VERSION 3.8)
project(cw_04_library)

add_library(cw_04_library "loops.cpp" "loops.h")
add_executable(cw_04_exe "main.cpp" "loops.cpp")