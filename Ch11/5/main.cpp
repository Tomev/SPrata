// Solution to problem 11.5 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include "stonewt.h"

int main() {
  using std::cout, std::endl;

  std::cout << "Constructors test.\n";

  Stonewt temp = Stonewt();
  cout << temp << endl;
  temp = Stonewt(340.34);
  cout << temp << endl;
  temp = Stonewt(43, 333.12);

  cout << temp << "\n\nDisplay mode tests.\n";
  cout << temp << endl;
  temp.setMode(pounds_int);
  cout << temp << endl;
  temp.setMode(pounds);

  cout << temp << "\n\nOperators test.\n";
  temp = 2 * temp;
  cout << temp << endl;
  Stonewt temp2 = Stonewt(340.34);
  Stonewt sum = temp + temp2;
  Stonewt diff = temp - temp2;
  cout << sum << endl << diff << endl << "Koniec.";





  return 0;
}