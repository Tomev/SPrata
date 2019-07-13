// Solution to problem 7.1 from C++ Primer Plus

#include <iostream>
#include <cmath>

double accuracy = 1e-5;
using std::cin, std::cout, std::string, std::endl, std::fabs;

double countHarmonicAverage(const double a, const double b){
  // Check for 0
  if(a + b < accuracy) return 0;
  return 2 * a * b / (a + b);
}

void getInfo(double &a, double &b){
  cout << "Input two numbers. 0 quits.\n>";

  cin >> a;
  cout << ">";
  cin >> b;
}



int main() {

  double a, b;

  getInfo(a, b);

  while(fabs(a) > accuracy && fabs(b) > accuracy){
    cout << "Harmonic average of given numbers is: " << countHarmonicAverage(a, b) << endl;
    getInfo(a, b);
  }

  cout << "The end.\n";

  return 0;
}