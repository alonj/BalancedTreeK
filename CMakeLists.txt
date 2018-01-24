cmake_minimum_required(VERSION 3.9)
project(hw4)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES
        BalancedTreeK.cpp
        BalancedTreeK.h
        Key.h
        Value.h
        main.cpp
        Node.cpp
        Node.h
        ParameterK.h)

add_executable(hw4 ${SOURCE_FILES})