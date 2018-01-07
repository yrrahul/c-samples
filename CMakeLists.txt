cmake_minimum_required(VERSION 3.9)
project(Sample)

set(CMAKE_CXX_STANDARD 11)

add_executable(Sample main.cpp SampleObject.cpp SampleObject.h)