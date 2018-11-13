#include <iostream>

int main(void)
{
  using namespace std;

  cout << "Input actual population size (ll).\n>";
  long long populationSize = 0;
  cin >> populationSize;

  cout << "Input selected country polulation size (ll).\n>";
  long long countryPopulationSize = 0;
  cin >> countryPopulationSize;

  cout  << "Country's population is equal to " << double(100 * countryPopulationSize) / populationSize
        << " percent of overall population size.\n";

  return 0;
}