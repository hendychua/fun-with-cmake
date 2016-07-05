cmake_minimum_required(VERSION 2.8.9)
project(libc_test)
set(CMAKE_BUILD_TYPE Release)

include_directories(.)

file(GLOB SOURCES "./*.cpp")

add_library(classC SHARED ${SOURCES})
