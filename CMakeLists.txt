cmake_minimum_required(VERSION 3.17)
project(Code)

set(CMAKE_CXX_STANDARD 14)
ADD_SUBDIRECTORY(实验题)
ADD_SUBDIRECTORY(派生与继承)
ADD_SUBDIRECTORY(C语言测试)
ADD_SUBDIRECTORY(函数)
ADD_SUBDIRECTORY(作用域)
ADD_SUBDIRECTORY(多态)

add_executable(Code C++测试/main.cpp 多态/more_use_4.cpp 多态/more_use_5.cpp 多态/more_use_6.cpp)






add_executable(derive_more_1 派生与继承/derive_more_1.cpp)
add_executable(moreuse_2 多态/moreuse_2.cpp 多态/more_use_3.cpp)
add_executable(StudentAddressBook StudentAddressBook.cpp)
add_executable(StudentScoreMangeSystem StudentScoreMangeSystem.cpp)
add_executable(more_use_3 多态/more_use_3.cpp)
add_executable(more_use_5 多态/more_use_5.cpp)