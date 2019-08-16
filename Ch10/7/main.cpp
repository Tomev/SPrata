// Solution to problem 10.7 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include "plorg.h"

int main() {

  std::cout << "Default plorg constructor.\n";
  Plorg p1 = Plorg();
  p1.show();

  std::cout << "Coefficient setter.\n";
  p1.setRepletionCoefficient(30);
  p1.show();

  std::cout << "Plorg constructor with arguments.\n";
  p1 = Plorg("Other Plorg", 666);
  p1.show();

  return 0;
}