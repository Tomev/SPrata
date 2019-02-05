#include <iostream>

int main() {
  long double sum = 0;
  long double temp = 0;
  do {
    sum += temp;
    std::cout << "Current sum: " << sum << std::endl;
    std::cout << "Input a number. 0 terminates.\n>";
  } while((std::cin >> temp) && temp != 0);
  std::cout << "Final sum: " << sum << std::endl;
  return 0;
}