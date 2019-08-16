// Solution to problem 10.6 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>

#include "move.h"

int main() {

  std:: cout << "Constructors with default and different parameters.\n";
  Move m1 = Move();
  Move m2 = Move(3, 7);
  m1.showMove();
  m2.showMove();

  std::cout << "Resetting m1.\n";
  m1.reset(7, 4);
  m1.showMove();

  std::cout << "Add test.\n";
  Move m3 = m1.add(m2);
  m3.showMove();

  std::cout << "Default reset.\n";
  m3.reset();
  m3.showMove();

  return 0;
}