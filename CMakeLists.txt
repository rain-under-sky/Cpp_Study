cmake_minimum_required(VERSION 3.17)
project(Code)

set(CMAKE_CXX_STANDARD 14)
ADD_SUBDIRECTORY(实验题)
ADD_SUBDIRECTORY(派生与继承)
ADD_SUBDIRECTORY(C语言测试)
ADD_SUBDIRECTORY(函数)
ADD_SUBDIRECTORY(作用域)

add_executable(Code C++测试/main.cpp 作用域/static_use_2.cpp)





add_executable(static_use_1 作用域/static_use_1.cpp)