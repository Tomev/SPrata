// Solution to problem 9.4 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include "sales.h"

int main() {

  using namespace SALES;

  Sales s1{};
  Sales s2{};

  double quarters[] = {1, 2, 3};

  setSales(s1, quarters, 3);
  setSales(s2);

  showSales(s1);
  showSales(s2);


  return 0;
}