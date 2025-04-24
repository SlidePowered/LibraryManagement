cmake_minimum_required(VERSION 3.29)
project(LibraryManagement)

set(CMAKE_CXX_STANDARD 11)

add_executable(LibraryManagement src/main.cpp)

target_include_directories(LibraryManagement PRIVATE include)