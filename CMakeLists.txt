cmake_minimum_required(VERSION 3.17)
project(Code)

set(CMAKE_CXX_STANDARD 14)

add_executable(Code main.cpp Ram_Apply_1.cpp Ram_Apply_2.cpp quote.cpp Structure_Use_1.cpp Link_List_Use_1.cpp test.cpp)





add_executable(Ram_Apply_1 Ram_Apply_1.cpp)
add_executable(Ram_Apply_2 Ram_Apply_2.cpp)
add_executable(quote quote.cpp)
add_executable(Structure_Use_1 Structure_Use_1.cpp)
add_executable(Link_List_Use_1 Link_List_Use_1.cpp)