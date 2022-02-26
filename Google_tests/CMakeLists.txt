cmake_minimum_required(VERSION 3.12) # version can be different

project(my_cpp_project) #name of your project

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(googletest) # add googletest subdirectory

include_directories(googletest googletest/include ../programs) # this is so we can #include <gtest/gtest.h>

set(SOURCE_FILES "test.cpp" )

add_executable(myTests ${SOURCE_FILES}) # add this executable

file(GLOB SOURCES
        ../programs/*.h
        ../programs/*.cpp
        )

add_library(programs STATIC ${SOURCES})

target_link_libraries(myTests programs gtest gtest_main) #link google test to this executable