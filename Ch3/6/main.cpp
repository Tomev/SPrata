#include <iostream>

int main(void)
{
  using namespace std;

  cout << "Input starting petrol liters (d).\n>";
  double startingPetrolLiters = 0;
  cin >> startingPetrolLiters;

  cout << "Input kms traveled (d).\n>";
  double kmsTraveled = 0;
  cin >> kmsTraveled;

  cout << "Input petrol liters left (d).\n>";
  double petrolLitersLeft = 0;
  cin >> petrolLitersLeft;

  cout << "The vehicle uses " << 100 * (startingPetrolLiters - petrolLitersLeft) / kmsTraveled
       << " liters of petrol per 100 kms.\n";

  return 0;
}