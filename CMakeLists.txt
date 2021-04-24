cmake_minimum_required(VERSION 3.17)
project(Code)

set(CMAKE_CXX_STANDARD 14)

add_executable(Code main.cpp quote_point_1.cpp 函数/Function_Overloading_use_1.cpp 函数/Function_Default_use_1.cpp 函数/Function_Build_in.cpp 类/class_use_1.cpp 类/class_use_2.cpp 类/class_use_3.cpp 类/class_use_4.cpp 类/class_use_5.cpp 类/class_use_6.cpp 类/class_use_7.cpp test.c 类/class_use_8.cpp 类/class_use_9.cpp 类/class_function_use_1.cpp 类/class_use_10.cpp 类/class_copy_function_1.cpp 类/class_copy_function_2.cpp test_2.cpp 类/class_this_use_1.cpp number.c experiment_1_1.cpp experiment_1_2.cpp experiment_1_3.cpp)


add_executable(class_function_use_2 类/class_function_use_2.cpp)
add_executable(class_copy_function_1 类/class_copy_function_1.cpp 派生与继承/paisheng.cpp)
add_executable(class_copy_function_2 类/class_copy_function_2.cpp)

add_executable(class_this_use_1 类/class_this_use_1.cpp)
add_executable(Ram_Apply_2 Ram_Apply_2.cpp)
add_executable(number number.c)

add_executable(experiment_1_3 experiment_1_3.cpp)
add_executable(experiment_1_2 experiment_1_2.cpp)
add_executable(experiment_1_1 experiment_1_1.cpp)
add_executable(test test.c)
add_executable(paisheng 派生与继承/paisheng.cpp)