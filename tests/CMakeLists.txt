cmake_minimum_required(VERSION 3.20)

set( CMAKE_CXX_COMPILER "g++")
set( CMAKE_C_COMPILER "gcc")

# set the project name
project(testing VERSION 0.1.0)

enable_testing()

add_executable(tester "./test_code.c" "../src/source_code.c")   # Add more source files if needed
add_test(Tester tester)

#Add more tests


