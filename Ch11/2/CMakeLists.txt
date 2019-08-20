cmake_minimum_required(VERSION 3.14)
project(2)


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-std=c++1z")

add_executable(2 main.cpp vect.h vect.cpp)