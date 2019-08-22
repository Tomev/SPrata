//
// Created by Tomev on 22.08.2019.
// Implementation of Time class members from S. Prata's C++ Primer Plus VI ed.
// Modified to suit solution to problem 11.4.
//

#include "mytime3.h"

Time::Time() {
  hours = minutes = 0;
}

Time::Time(int h, int m) {
  hours = h;
  minutes = m;
}

void Time::AddMin(int m) {
  minutes += m;
  hours += minutes / 60;
  minutes = minutes % 60;
}

void Time::AddHr(int h) {
  hours += h;
}

void Time::Reset(int h, int m) {
  hours = h;
  minutes = m;
}

Time operator+(const Time &t1, const Time &t2) {
  Time sum;
  int minutes = t1.minutes + t2.minutes;
  int hours = t1.hours + t2.hours;
  sum.hours = hours + minutes / 60;
  sum.minutes = minutes % 60;
  return sum;
}

Time operator-(const Time &t1, const Time &t2) {
  Time diff;
  int tot1, tot2;
  tot1 = t1.minutes + 60 * t1.hours;
  tot2 = t2.minutes + 60 * t2.hours;
  diff.minutes = (tot2 - tot1) % 60;
  diff.hours = (tot2 - tot1) / 60;
  return diff;
}

Time operator*(double m, const Time &t) {
  Time result;
  long totalMinutes = t.minutes + t.hours * 60;
  totalMinutes *= m;
  result.hours = totalMinutes / 60;
  result.minutes = totalMinutes % 60;
  return result;
}

ostream &operator<<(ostream &os, const Time &t) {
  os << t.hours << " godzin, " << t.minutes << " minut";
  return os;
}