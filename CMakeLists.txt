cmake_minimum_required(VERSION 3.23)
project(udemy_cpp_course_3)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -gdwarf-3")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -gdwarf-3")

add_executable(udemy_cpp_course_3 section12-module116/main.cpp section12-module116/List.h section12-module116/LinkedList.h)