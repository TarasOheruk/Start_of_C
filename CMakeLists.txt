# Works with 3.15 and tested through 3.21
cmake_minimum_required(VERSION 3.15...3.25)

# Project name and a few useful settings. Other commands can pick up the results
project(
  ModernCMakeExample
  VERSION 0.1
  DESCRIPTION "An example project with CMake"
  LANGUAGES C)

# The compiled library code is here
add_subdirectory(src)

# The executable code is here
add_subdirectory(apps)

add_subdirectory(tests)


