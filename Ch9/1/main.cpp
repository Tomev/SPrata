// Solution to problem 9.1 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include "golf.h"

int main() {
  golf set1{};
  golf set2{};

  std::cout << "Setting golf 1.\n";
  setgolf(set1, "Anna Brown", 0);
  std::cout << "Setting golf 2.\n";
  setgolf(set2);
  showgolf(set1);
  showgolf(set2);
  std::cout << "Resetting hc of Anna to 10.\n";
  handicap(set1, 10);
  showgolf(set1);
}