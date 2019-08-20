// Solution to problem 11.2 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "vect.h"

int main() {
  using namespace std;
  using VECTOR::Vector;
  srand(time(nullptr));
  double direction;
  Vector step;
  Vector result(0.0, 0.0);
  unsigned long steps = 0;
  double target;
  double dstep;
  cout << "Podaj dystans do przejścia (k, aby zakończyć): ";
  while (cin >> target){
    cout << "Podaj długość kroku: ";
    if(!(cin >> dstep)) break;

    ofstream out("D:\\SP112.txt");
    auto coutbuff = cout.rdbuf();
    cout.rdbuf(out.rdbuf());

    cout << "Dystans do przejścia: " << target << ", Długość kroku: " << dstep << endl;

    while(result.magval() < target){
      direction = rand() % 360;
      step.reset(dstep, direction, Vector::POL);
      result = result + step;
      cout << steps++ << ": " << result << endl;
    }

    cout << "Po " << steps << " krokach delikwent osiągnął położenie:\n";
    cout << result << endl;
    result.polar_mode();
    cout << " czyli\n" << result << endl;
    cout << "Średnia długość kroku pozornego = " << result.magval() / steps << endl;

    cout.rdbuf(coutbuff);

    steps = 0;
    result.reset(0.0, 0.0);
    cout << "Podaj dystans do przejścia (k, aby zakończyć): ";
  }
  cout << "Koniec!\n";
  cin.clear();
  while(cin.get() != '\n') continue;

  return 0;
}