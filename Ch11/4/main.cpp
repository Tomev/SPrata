// Solution to problem 11.4 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>

#include "mytime3.h"

int main() {
  using std::cout, std::endl;
  Time aida(3, 35);
  Time tosca(2, 48);
  Time temp;

  cout << "Aita i Tosca:\n";
  cout << aida << "; " << tosca << endl;
  temp = aida + tosca;
  cout << "Aida + Tosca: " << temp << endl;
  temp = 1.17 * aida;
  cout << "Aida * 1.17: " << temp << endl;
  cout << "10 * Tosca: " << 10 * tosca << endl;

  return 0;
}