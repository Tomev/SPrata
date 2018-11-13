#include <iostream>

const double CentimetersInFoot = 30.48;
const double CentimetersInInch = 2.54;

double centimetersToFeet(double centimeters)
{
  return centimeters / CentimetersInFoot;
}

double centimetersToInches(double centimeters)
{
  return centimeters / CentimetersInInch;
}

int main(void)
{
  using namespace std;

  cout << "Input height in centimeters.\n>";
  double heightInCentimeters = 0.0;
  cin >> heightInCentimeters;
  cout  << "Your height in feet equals " << centimetersToFeet(heightInCentimeters) << " and in inches "
        << centimetersToInches(heightInCentimeters) << ".\n";

  return 0;
}