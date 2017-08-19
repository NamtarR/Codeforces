//
// Created by Anton Tarasov on 17.08.17.
//

#include "problem1.h"
#include <iostream>
#include <unordered_map>

bool problem1(int n, int k, std::string text) {
  std::unordered_map<char, int> map;

  for (char symbol : text) {
    if (map.find(symbol)==map.end()) {
      map[symbol] = 1;
    } else {
      map[symbol] += 1;
      if (map[symbol] > k) {
        return false;
      }
    }
  }
  return true;
}

void problem1_solution() {
  int n = 0, k = 0;
  std::cin >> n >> k;

  std::string text;
  std::cin >> text;

  if (problem1(n, k, text)) {
    std::cout << "YES";
  } else {
    std::cout << "NO";
  }
}

/*int main() {
    problem1_solution();
    return 0;
}*/