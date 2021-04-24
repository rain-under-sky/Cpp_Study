cmake_minimum_required(VERSION 3.17)
project(Code)

set(CMAKE_CXX_STANDARD 14)
ADD_SUBDIRECTORY(实验题)
ADD_SUBDIRECTORY(派生与继承)

add_executable(Code C++测试/main.cpp 实验题/experiment_2_3.cpp)




add_executable(experiment_2_1 实验题/experiment_2_1.cpp)
add_executable(experiment_2_2 实验题/experiment_2_2.cpp)
add_executable(experiment_2_3 实验题/experiment_2_3.cpp)
add_executable(paisheng 派生与继承/paisheng.cpp)