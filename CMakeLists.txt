cmake_minimum_required(VERSION 3.8)
project(task2)

set(CMAKE_GENERATOR "Ninja")
set(CMAKE_CXX_STANDART 11)

add_library(calculator STATIC calculator.cpp)

add_executable(task2 task2.cpp)

target_link_libraries(task2 calculator)
