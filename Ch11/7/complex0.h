//
// Created by Tomev on 29.08.2019.
// Complex class for problem 11.7.
//

#ifndef INC_7_COMPLEX0_H
#define INC_7_COMPLEX0_H

#include <iostream>

class complex {
  public:
    explicit complex(const double & re = 0, const double & im = 0);
    friend std::ostream& operator<<(std::ostream& out, const complex & c);
    friend std::istream&operator>>(std::istream& in, complex & c);
  private:
    double _re, _im;
    friend complex operator+(const complex & c1, const complex & c2);
    friend complex operator-(const complex & c1, const complex & c2);
    friend complex operator*(const complex & c1, const complex & c2);
    friend complex operator~(const complex & c1);
};

#endif //INC_7_COMPLEX0_H
