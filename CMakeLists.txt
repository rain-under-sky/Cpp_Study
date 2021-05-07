cmake_minimum_required(VERSION 3.17)
project(Code)

set(CMAKE_CXX_STANDARD 14)
ADD_SUBDIRECTORY(实验题)
ADD_SUBDIRECTORY(派生与继承)
ADD_SUBDIRECTORY(C语言测试)
ADD_SUBDIRECTORY(函数)
add_executable(Code C++测试/main.cpp)





add_executable(test test.cpp)
add_executable(experiment_2_2 实验题/experiment_2_2.cpp)