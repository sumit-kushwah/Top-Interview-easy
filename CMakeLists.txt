cmake_minimum_required(VERSION 3.21)
project(top_interview_easy)

set(CMAKE_CXX_STANDARD 17)

add_executable(top_interview_easy main.cpp)

include_directories(programs)
add_subdirectory(programs)

target_link_libraries(top_interview_easy programs)

add_subdirectory(Google_tests)