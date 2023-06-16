cmake_minimum_required(VERSION 3.5)

project(Test LANGUAGES C)

add_executable(Test main.c)


target_include_directories(Test PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/ocollection.h
)

install(TARGETS Test
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
