cmake_minimum_required(VERSION 3.24)
project(MireaPractic)

set(CMAKE_CXX_STANDARD 14)


add_executable(secondPractice_firstTask
        second_practice/first_task/main.cpp
        second_practice/first_task/triangle.cpp
        second_practice/first_task/triangle.h
        )

add_executable(secondPractice_secondTask
        second_practice/second_task/circle.h
        second_practice/second_task/circle.cpp
        second_practice/second_task/main.cpp)

add_executable(secondPractice_thirdTask
        second_practice/third_task/figure.h
        second_practice/third_task/figure.cpp
        second_practice/third_task/main.cpp)
