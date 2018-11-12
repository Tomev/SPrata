#include <iostream>

void printInTimeFormat(int hours, int minutes)
{
  std::cout << hours << ":" << minutes << std::endl;
}

int main(void)
{
  int hours = 0;
  int minutes = 0;
  std::cout << "Input number oh hours.\n>";
  std::cin >> hours;
  std::cout << "Input number oh minutes.\n>";
  std::cin >> minutes;
  printInTimeFormat(hours, minutes);
  return 0;
}