cmake_minimum_required(VERSION 3.29)
project(practice1)

set(CMAKE_CXX_STANDARD 20)

add_executable(practice1 main.cpp
        Complex.cpp
        Complex.h
        ComplexList.cpp
        ComplexList.h)
