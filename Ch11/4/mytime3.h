//
// Created by Tomev on 22.08.2019.
// A Time class header from S. Prata's C++ Primer Plus VI ed.
// Modified to suit solution to problem 11.4.
//

#ifndef INC_4_MYTIME3_H
#define INC_4_MYTIME3_H

#include <iostream>

using std::ostream;

class Time {
  public:
    Time();
    explicit Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    friend Time operator+(const Time & t1, const Time & t2);
    friend Time operator-(const Time & t1, const Time & t2);
    friend Time operator*(double m, const Time & t);
    friend Time operator*(const Time & t, double m) {return m * t;}
    friend ostream & operator<<(ostream & os, const Time & t);
  private:
    int hours;
    int minutes;
};

#endif //INC_4_MYTIME3_H
