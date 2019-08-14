// Solution to problem 10.4 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include "sales.h"

int main() {

  using namespace SALES;

  double quarters[] = {1, 2, 3};
  Sales s1 = Sales(quarters, 3);
  Sales s2 = Sales();

  s1.show();
  s2.show();

  return 0;
}