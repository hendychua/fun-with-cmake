cmake_minimum_required(VERSION 2.8.9)
project(the_exe)
add_executable(the_exe main.cpp)

# Add lib_a, lib_b and lib_c to #include search path
include_directories(${liba_test_SOURCE_DIR} ${libb_test_SOURCE_DIR} ${libc_test_SOURCE_DIR})

# Specify the_exe's dependencies.
target_link_libraries(the_exe classA classB classC)
