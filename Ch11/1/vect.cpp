//
// Created by Tomev on 19.08.2019.
// Implementation of Vector class.
//

#include <cmath>
#include <iostream>
#include "vect.h"

using std::sqrt, std::sin, std::cos, std::atan, std::atan2, std::cout;

namespace VECTOR{
  const double Rad_to_deg = 45.0 / atan(1.0);

  void Vector::set_mag() {
    mag = sqrt(x * x + y * y);
  }

  void Vector::set_ang() {
    if(x == 0.0 && y == 0.0){
      ang = 0.0;
    }
    else{
      ang = atan2(y, x);
    }

  }

  void Vector::set_x() {
    x = mag * cos(ang);
  }

  void Vector::set_y() {
    y = mag * sin(ang);
  }

  Vector::Vector() {
    x = y = mag = ang = 0.0;
    mode = RECT;
  }

  Vector::Vector(double n1, double n2, Vector::Mode form) {
    mode = form;
    if(form == RECT){
      x = n1;
      y = n2;
      set_mag();
      set_ang();
    }
    else if (form == POL){
      mag = n1;
      ang = n2 / Rad_to_deg;
      set_x();
      set_y();
    }
    else{
      cout << "Niepoprawna wartość trzeciego argumentu Vector() -- ";
      cout << "zeruję wektor\n";
      x = y = mag = ang = 0.0;
      mode = RECT;
    }
  }

  void Vector::reset(double n1, double n2, Vector::Mode form) {
    mode == form;
    if(form == RECT){
      x = n1;
      y = n2;
      set_mag();
      set_ang();
    }
    else if(form == POL){
      mag = n1;
      ang = n2 / Rad_to_deg;
      set_x();
      set_y();
    }
    else{
      cout << "Niepoprawny trzeci argument set() -- ";
      cout << "zeruję wektor.\n";
      x = y = mag = ang = 0.0;
      mode = RECT;
    }
  }

  std::ostream &operator<<(std::ostream &os, const Vector &v) {
    if(v.mode == Vector::RECT){
      os << "(x,y) = (" << v.x << ", " << v.y << ")";
    }
    else if (v.mode == Vector::POL){
      os << "(m,a) = (" << v.mag << ", " << v.ang * Rad_to_deg << ")";
    }
    else
      os << "Niepoprawny tryb reprezentacji obiektu wektora.";
    return os;
  }

}