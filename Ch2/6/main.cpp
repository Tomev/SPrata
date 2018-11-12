#include <iostream>

double LYToAU(double LY)
{
  return LY * 63240;
}

int main(void)
{
  double LY;
  std::cout << "Input number of light years.\n>";
  std::cin >> LY;
  std::cout << LY << " light years is " << LYToAU(LY) << " astronomical unit(s).\n";
  return 0;
}