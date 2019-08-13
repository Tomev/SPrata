// Solution to problem 10.3 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include "golf.h"

int main() {

  golf g1 = golf();
  g1.show();
  golf g2 = golf("Dupa", 13);
  g2.show();
  golf g3 = golf(g1);
  g3.show();

  return 0;
}