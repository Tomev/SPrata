//
// Created by Tomev on 19.08.2019.
// Vector class from S. Prata's C++ Primer Plus VI ed.
//

#ifndef INC_1_VECT_H
#define INC_1_VECT_H

#include <ostream>

namespace VECTOR{
  class Vector {
    public:
      enum Mode{RECT, POL};
      Vector();
      Vector(double n1, double n2, Mode form = RECT);
      void reset(double n1, double n2, Mode form = RECT);
      ~Vector() {}
      double xval() const {return x;}
      double yval() const {return y;}
      double magval() const {return mag;}
      double angval() const {return ang;}
      void polar_mode() {mode = POL;}
      void rect_mode() {mode = RECT;}
      Vector operator+(const Vector & b) { return Vector(x + b.x, y + b.y);}
      Vector operator-(const Vector & b) { return Vector(x - b.x, y - b.y);}
      Vector operator-() const {return Vector(-x, -y);}
      Vector operator*(double n) { return Vector(n*x, n*y);}
      friend Vector operator*(double n, const Vector & a) {return n * a;}
      friend std::ostream & operator<<(std::ostream & os, const Vector &v);
    private:
      double x;
      double y;
      double mag;
      double ang;
      Mode mode;
      void set_mag();
      void set_ang();
      void set_x();
      void set_y();
  };
}

#endif //INC_1_VECT_H
