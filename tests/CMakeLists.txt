# Tests need to be added as executables first
add_executable(testOvector ovectorTest.c)

# I'm using C++17 in the test
target_compile_features(testOvector PRIVATE c_std_11)


# If you register a test, then ctest and make test will run it. You can also run
# examples and check the output, as well.
add_test(NAME testlibtest  COMMAND testOvector) # Command can be a target

target_link_libraries(testOvector PRIVATE modern_library)
