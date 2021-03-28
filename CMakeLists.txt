cmake_minimum_required(VERSION 3.17)
project(Code)

set(CMAKE_CXX_STANDARD 14)

add_executable(Code main.cpp quote_point_1.cpp Function_Overloading_use_1.cpp Function_Default_use_1.cpp Function_Build_in.cpp)
add_executable(Function_Use_1 Function_Use_1.cpp)
add_executable(quote_use_1 quote_use_1.cpp)
add_executable(quote_point_1 quote_point_1.cpp)
add_executable(Function_Overloading_use_1 Function_Overloading_use_1.cpp)
add_executable(Function_Default_use_1 Function_Default_use_1.cpp)
add_executable(Function_Build_in Function_Build_in.cpp)
add_executable(Link_List_Use_1 Link_List_Use_1.cpp)