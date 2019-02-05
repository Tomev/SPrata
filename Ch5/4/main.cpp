#include <iostream>

int main() {
  double addition = 100;
  double multiplication = 100;
  const double multiplicationModifier = 1.05;
  const double additionPercent = 10;
  double addend = addition / 100 * additionPercent;

  int count = 0;

  while(addition >= multiplication){
    addition += addend;
    multiplication *= multiplicationModifier;
    ++count;
  }

  const int additionalSteps = 5;

  std::cout << "Multiplication is higher than addition after " << count << " steps. Values of another "
            << additionalSteps << " steps is:\n";

  for(int i = 0; i < additionalSteps; ++ i){
    addition += addend;
    multiplication *= multiplicationModifier;
    std::cout << "Addition: " << addition << std::endl;
    std::cout << "Multiplication: " << multiplication << std::endl << std::endl;
  }






  //int


  return 0;
}