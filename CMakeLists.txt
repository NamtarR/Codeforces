cmake_minimum_required(VERSION 3.8)
project(codeforces)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp problems/problem1.cpp)
add_executable(codeforces ${SOURCE_FILES})

include_directories(problems)

add_subdirectory(problems)
add_subdirectory(problems_tests)

target_link_libraries(codeforces problems)