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

add_executable(sixth_practice_first_task
        sixth_practice/first_task/main.cpp)

add_executable(sixth_practice_second_task
        sixth_practice/second_task/cone.cpp sixth_practice/second_task/cone.h sixth_practice/second_task/main.cpp)

add_executable(sixth_practice_third_task
        sixth_practice/third_task/main.cpp sixth_practice/third_task/bay.cpp sixth_practice/third_task/ocean.cpp sixth_practice/third_task/sea.cpp)

add_executable(seventh_practice
        seventh_practice/main.cpp seventh_practice/type1.cpp seventh_practice/type2.cpp)

add_executable(eight_practice
        eight_practice/main.cpp eight_practice/type3.cpp eight_practice/type4.cpp)
