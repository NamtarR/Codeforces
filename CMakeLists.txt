cmake_minimum_required(VERSION 3.8)
project(codeforces)

set(CMAKE_CXX_STANDARD 14)

include_directories(problems)

add_subdirectory(problems)
add_subdirectory(problems_tests)