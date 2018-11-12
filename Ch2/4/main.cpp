#include <iostream>

int fullYearsToMonths(int years)
{
  return years * 12;
}

int main(void)
{
  int years;

  std::cout << "Input your age in full years (int).\n>";
  std::cin >> years;

  std::cout << years << " years is " << fullYearsToMonths(years) << " years.\n";
  return 0;
}