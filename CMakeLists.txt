cmake_minimum_required(VERSION 3.21)
project(cpp11)

set(CMAKE_CXX_STANDARD 14)

include_directories(shared_pointer)
include_directories(unique_pointer)

add_executable(cpp11
        shared_pointer/Counter.cpp
        shared_pointer/Counter.h
        shared_pointer/main.cpp
        shared_pointer/SharePointer.cpp
        shared_pointer/SharePointer.h
        shared_pointer/someClass.cpp
        shared_pointer/someClass.h
        unique_pointer/main.cpp
        unique_pointer/someClass.cpp
        unique_pointer/someClass.h
        unique_pointer/UniquePointer.cpp
        unique_pointer/UniquePointer.h)
