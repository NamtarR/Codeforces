project(problems_tests)

add_executable(run_tests test1.cpp)

target_link_libraries(run_tests gtest gtest_main)
target_link_libraries(run_tests problems)