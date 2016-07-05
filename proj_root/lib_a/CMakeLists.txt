cmake_minimum_required(VERSION 2.8.9)
project(liba_test)
set(CMAKE_BUILD_TYPE Release)

include_directories(. ${libb_test_SOURCE_DIR})

file(GLOB SOURCES "./*.cpp")

add_library(classA SHARED ${SOURCES})

target_link_libraries(classA classB)
