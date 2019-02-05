#include <iostream>

int main() {

  int min = 0, max = 0;
  std::cout << "Input first integer.\n>";
  std::cin >> min;
  std::cout << "Input second integer.\n>";
  std::cin >> max;

  int sum = 0;

  while(min <= max)
    sum += min++;

  std::cout << "Sum of integers in between: " << sum << ".\n";

  return 0;
}