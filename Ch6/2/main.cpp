#include <iostream>

int arrayElements = 10;

int main() {
  double cash[arrayElements];
  int gotElementsNumber = 0;
  std::cout << "Gimme cash. Max 10 double elements.\n";
  for(int i = 0; i < arrayElements, std::cin >> cash[i]; ++i)
    ++gotElementsNumber;
  double average = 0.0;
  for(int i = 0; i < gotElementsNumber; ++i)
    average += cash[i];
  average /= gotElementsNumber;
  std::cout << "Average of given values : " << average << ".\nValues higher than average:\n";
  for(int i = 0; i < gotElementsNumber; ++i) {
    if(cash[i] > average) std::cout << cash[i] << std::endl;
  }
  return 0;
}