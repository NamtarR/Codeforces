//
// Created by Anton Tarasov on 17.08.17.
//

#include <gtest/gtest.h>
#include "problem1.h"

TEST(problem1, Test1) {
  int n = 4, k = 2;
  std::string text = "aabb";
  EXPECT_EQ(problem1(n, k, text), true);
}

TEST(problem1, Test2) {
  int n = 6, k = 3;
  std::string text = "aacaab";
  EXPECT_EQ(problem1(n, k, text), false);
}

TEST(problem1, Test3) {
  int n = 36, k = 13;
  std::string text = "bzbzcffczzcbcbzzfzbbfzfzzbfbbcbfccbf";
  EXPECT_EQ(problem1(n, k, text), true);
}

TEST(problem1, Test4) {
  int n = 81, k = 3;
  std::string text = "ooycgmvvrophvcvpoupepqllqttwcocuilvyxbyumdmmfapvpnxhjhxfuagpnntonibicaqjvwfhwxhbv";
  EXPECT_EQ(problem1(n, k, text), false);
}

TEST(problem1, Test5) {
  int n = 100, k = 100;
  std::string
      text = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
  EXPECT_EQ(problem1(n, k, text), true);
}