cmake_minimum_required(VERSION 3.17)
project(Code)

set(CMAKE_CXX_STANDARD 14)
ADD_SUBDIRECTORY(实验题)
ADD_SUBDIRECTORY(派生与继承)
ADD_SUBDIRECTORY(C语言测试)
ADD_SUBDIRECTORY(函数)
add_executable(Code C++测试/main.cpp 派生与继承/derive_2.cpp 派生与继承/derive_3.cpp 派生与继承/derive_more_1.cpp 派生与继承/derive_more_2.cpp 实验题/experiment_4_1.cpp "实验题/experiment_1_3_1.cpp")





add_executable(derive_1 派生与继承/derive_1.cpp)
add_executable(derive_2 派生与继承/derive_2.cpp)
add_executable(test test.cpp)
add_executable(Function_Build_in 函数/Function_Build_in.cpp)

add_executable(derive_more_1 派生与继承/derive_more_1.cpp)
add_executable(experiment_2_3 实验题/experiment_2_3.cpp)
add_executable(derive_more_2 派生与继承/derive_more_2.cpp)
add_executable(experiment_1_1 实验题/experiment_1_1.cpp)
add_executable(experiment_4_1 实验题/experiment_4_1.cpp)
add_executable(experiment_1_3 实验题/experiment_1_3.cpp)
add_executable(experiment_1_3_1 "实验题/experiment_1_3_1.cpp")
add_executable(experiment_2_1 实验题/experiment_2_1.cpp)