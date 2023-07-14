cmake_minimum_required(VERSION 3.5)

project(ovector LANGUAGES C)

add_library(Ovectorlib SHARED ovector.c ovector.h)

add_library(ovector_test STATIC test_functions.c ovector.h test_functions.h)

add_executable(ovector main.c)

target_link_libraries(ovector Ovectorlib)
target_link_libraries(ovector ovector_test)
