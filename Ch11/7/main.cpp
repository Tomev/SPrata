// Solution to problem 11.7. from S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include "complex0.h"

using std::cout, std::cin, std::endl;

int main() {
  complex a(3.0, 4.0);
  complex c;
  cout << "Podaj liczbę zespoloną (k, aby zakończyć):\n";

  while(cin >> c){
    cout << "c to " << c << "\na to " << a << endl << "\na + c wynosi : " << a + c
         << "\na - c wynosi: " << a - c << "\na * c wynosi" << a - c << "\n2 * c wynosi: " << 2 * c
         << "\nPodaj kolejną liczbę zespoloną (k, aby zakończyć):\n";
  }

  cout << "Gotowe.\n";
  return 0;
}