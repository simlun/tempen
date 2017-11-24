cmake_minimum_required(VERSION 3.8)
project(tempen)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(tempenlib)
add_subdirectory(tempenapp)
add_subdirectory(tempentests)
