//
// Created by Anton Tarasov on 17.08.17.
//

#include <gtest/gtest.h>
#include "problem1.h"


TEST(problem1, Test1) {
    int value = testable_function(2);
    EXPECT_EQ(value, 4);
}

TEST(problem1, Test2) {
    int value = testable_function(10);
    EXPECT_EQ(value, 101);
}