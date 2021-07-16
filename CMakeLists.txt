cmake_minimum_required(VERSION 3.19)
project(HeritageDemo)

set(CMAKE_CXX_STANDARD 14)

add_executable(HeritageDemo main.cpp Employee.cpp Employee.h Manager.cpp Manager.h Rectangle.cpp Rectangle.h Square.cpp Square.h)