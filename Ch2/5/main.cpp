#include <iostream>

double celsiusToFarenheit(double degrees)
{
  return 1.8 * degrees + 32;
}

int main(void)
{
  double cDegrees = 0;
  std::cout << "Input number of degrees in Celsius degrees.\n>";
  std::cin >> cDegrees;
  std::cout << cDegrees << " Celsius degrees is " << celsiusToFarenheit(cDegrees) << " Farenheit degrees.\n20";
  return 0;
}