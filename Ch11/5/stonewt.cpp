//
// Created by Tomev on 23.08.2019.
// A Stonewt class implementation from S. Prata's C++ Primer Plus VI ed.
// Modified as instructed in problem 11.5.
// Note that I'm leaving methods I presented in the book as they were even if they are incorrect.
//

#include <iostream>

#include "stonewt.h"

using std::cout;

Stonewt::Stonewt(double lbs, WeightMode m) : mode(m) {
  stone = int (lbs) / Lbs_per_stn;
  pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
  pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs, WeightMode m) : mode(m) {
  stone = stn;
  pds_left = lbs;
  pounds = stn * Lbs_per_stn;
}

Stonewt::Stonewt(WeightMode m) : mode(m) {
  stone = pounds = pds_left = 0;
}

void Stonewt::setMode(WeightMode newMode) {
  mode = newMode;
}

std::ostream &operator<<(std::ostream &c, const Stonewt &stonewt) {
  switch(stonewt.mode){
    case stones:
      c << stonewt.stone << " kamieni, " << stonewt.pds_left << " funtów";
      break;
    case pounds_int:
      c << int(stonewt.pounds) << " całych funtów";
      break;
    case pounds:
      c << stonewt.pounds + stonewt.pds_left << " funtów";
      break;
    default:
      c << "Wprowadzono nieprawidłowy tryb wyświetlania.";
      break;
  }

  return c;
}

Stonewt operator+(const Stonewt &stonewt1, const Stonewt &stonewt2) {
  return Stonewt(stonewt1.pounds + stonewt2.pounds);
}

Stonewt operator-(const Stonewt &stonewt1, const Stonewt &stonewt2) {
  double diffPounds = std::max(0.0, stonewt1.pounds - stonewt2.pounds);
  return Stonewt(diffPounds);
}

Stonewt operator*(const double &n, const Stonewt &stonewt) {
  return Stonewt(n * stonewt.pounds);
}




