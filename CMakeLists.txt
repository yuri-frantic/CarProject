cmake_minimum_required(VERSION 3.10)
project(CarProject)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(CarProject src/main.cpp src/Car.cpp src/Lorry.cpp) 
