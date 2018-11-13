#include <iostream>

const double milesIn100km = 62.14;
const double litersInGalon = 3.875;

int main(void)
{
  using namespace std;

  cout << "Input vehicle liters per 100 km (d).\n>";
  double litersPer100km = 0;
  cin >> litersPer100km;

  cout  << "This vehicle miles per galon equals to "
        << 1.0 / ((litersPer100km / litersInGalon) / milesIn100km)
        << ".\n";

  return 0;
}