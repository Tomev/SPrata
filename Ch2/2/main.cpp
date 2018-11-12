#include <iostream>

double milesToMeters(double miles)
{
  return miles * 1852;
}

int main(void) {
  double miles;

  std::cout << "Input miles.\n>";
  std::cin >> miles;

  std::cout << miles << " miles is " << milesToMeters(miles) << " meters.\n";
  return 0;
}