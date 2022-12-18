cmake_minimum_required(VERSION 3.23)
project(udemy_cpp_course_3)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -gdwarf-3")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -gdwarf-3")

add_executable(udemy_cpp_course_3 section10-project2/main.cpp section10-project2/Player.cpp section10-project2/Player.h section10-project2/Warrior.cpp section10-project2/Warrior.h section10-project2/Priest.cpp section10-project2/Priest.h section10-project2/Mage.cpp section10-project2/Mage.h)