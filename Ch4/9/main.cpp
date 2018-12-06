#include <iostream>
#include <string>

struct candyBar{
    std::string mark = "";
    double weight = 0.0;
    int calories = 0;
};

int main(){

  candyBar *snacks = new candyBar[3];
  *snacks = {"Mocha Munch", 2.3, 350};
  *(snacks + 1) = {"Yummers", 2.6, 500};
  *(snacks + 2) = {"Crapson", 3.3, 300};

  for(int i = 0; i < 3; ++i) {
    std::cout << "Name: " << snacks[i].mark << ", weight: " << snacks[i].weight << ", calories = "
              << snacks[i].calories << std::endl;
  }

  return 0;
}