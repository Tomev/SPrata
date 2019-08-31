// Solution to problem 12.1 form S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include "cow.h"

int main() {

  Cow c1 = Cow();
  c1.ShowCow();

  Cow c2 = Cow("name", "hobby", 333);
  Cow c4 = Cow(c2);
  Cow c3 = c2;

  c2.ShowCow();
  c3.ShowCow();
  c4.ShowCow();

  return 0;
}