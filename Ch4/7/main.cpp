#include <iostream>
#include <string>

struct pizzaInfo{
  std::string manufacturerName = "";
  double diameter = 0.0;
  double weight = 0.0;
};

int main() {
  using namespace std;
  // Again, no validation is necessary.

  pizzaInfo newPizza;

  cout << "Input pizza manufacturer name.\n>";
  cin >> newPizza.manufacturerName;
  cout << "Input pizza diameter.\n>";
  cin >> newPizza.diameter;
  cout << "Input pizza weight.\n>";
  cin >> newPizza.weight;

  cout  << "Info you provided is as follows. Pizza manufacturer name: "
        << newPizza.manufacturerName << ", pizza weight: "
        << newPizza.weight << ", pizza diameter: "
        << newPizza.diameter << ".\n";

  return 0;
}