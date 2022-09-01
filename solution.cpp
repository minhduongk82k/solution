#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

void generateBicycleNumbers() {
  std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
  for (char l = 'A'; l <= 'Z'; l++) {
    for (int i = 0; i < pow(10, 5); i++) {
      if (std::to_string(i).length() < 5) {
        std:: string stuff(5 - std::to_string(i).length(), '0');
        std::cout << l << stuff << i << std::endl;
      }
      else {
        std::cout << l << i << std::endl;
      }
    }
  }
}

int main() {
  generateBicycleNumbers();
}