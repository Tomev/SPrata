//
// Created by Tomev on 16.08.2019.
//

#include <iostream>
#include "move.h"

Move::Move(double a, double b) : x(a), y(b) {}

void Move::showMove() const {
  std::cout << "x = " << x << ", y = " << y << std::endl;
}

Move Move::add(const Move &m) const {
  return Move(m.x + x, m.y + y);
}

void Move::reset(double a, double b) {
  x = a;
  y = b;
}





