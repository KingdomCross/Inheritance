cmake_minimum_required(VERSION 3.15)
project(Inheritance)

set(CMAKE_CXX_STANDARD 17)

add_executable(Inheritance main.cpp pointTypeImp.cpp pointType.h circleType.h cylinderType.h circleTypeImp.cpp cylinderTypeImp.cpp)