#include <iostream>
#include <string>

struct car{
  std::string name = "";
  int prodYear = -1;
};

void printCar(car c)
{
  std::cout << c.prodYear << " " << c.name << std::endl;
}

int main() {

  int numberOfCars = 0;
  std::cout << "Input number of cars you want to input.\n>";
  std::cin >> numberOfCars;

  std::cin.clear();
  std::cin.get();

  car * cars = new car[numberOfCars];

  for(int i = 0; i < numberOfCars; ++i)
  {
    std::cout << "Car #" << i + 1 << ":\nInput mark: ";
    std::getline(std::cin, cars[i].name);
    std::cout << "Input production year: ";
    std::cin >> cars[i].prodYear;
    std::cin.clear();
    std::cin.get();
  }

  for(int i = 0; i < numberOfCars; ++i)
    printCar(*(cars + i));

  return 0;
}

