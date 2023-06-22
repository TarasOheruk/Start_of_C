cmake_minimum_required(VERSION 3.5)

project(Test LANGUAGES C)

add_library(Ovectorlib SHARED ovector.c)

add_executable(Test main.c)

target_link_libraries(Test Ovectorlib)
