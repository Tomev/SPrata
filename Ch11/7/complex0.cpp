//
// Created by Tomev on 29.08.2019.
// Implementation of complex class for problem 11.7.
//

#include "complex0.h"

complex::complex(const double &re, const double &im) : _re(re), _im(im) {}

complex operator+(const complex &c1, const complex &c2) {
  return complex{c1._re + c2._re, c1._im + c2._im};
}

complex operator-(const complex &c1, const complex &c2) {
  return complex(c1._re - c2._re, c1._im - c2._im);
}

complex operator*(const complex &c1, const complex &c2) {
  return complex(c1._re * c2._re - c1._im * c2._im, c1._re * c2._im + c2._re * c1._im);
}

complex operator~(const complex &c1) {
  return complex(c1._re, - c1._im);
}

std::ostream &operator<<(std::ostream &out, const complex &c) {
  out << "(" << c._re << ", " << c._im << " i)";
  return out;
}

std::istream &operator>>(std::istream &in, complex &c) {
  std::cout << "Składowa rzeczywista: ";
  in >> c._re;
  std::cout << "Składowa urojona: ";
  in >> c._im;
  return in;
}


