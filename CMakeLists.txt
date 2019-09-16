cmake_minimum_required(VERSION 3.14)
project(ppp)

set(CMAKE_CXX_STANDARD 14)

add_executable(ppp main.cpp integer.cpp integer.h Boolean.cpp Boolean.h Begin.cpp Begin.h If.cpp If.h)