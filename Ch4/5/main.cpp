#include <iostream>
#include <string>

struct candyBar{
    std::string mark = "";
    double weight = 0.0;
    int calories = 0;
};

int main(){

  candyBar snack = {"Mocha Munch", 2.3, 350};

  std::cout << "Name: " << snack.mark << ", weight: " << snack.weight << ", calories = " << snack.calories << std::endl;

  return 0;
}