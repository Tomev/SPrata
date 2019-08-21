// Solution to problem 11.3 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"

int main() {
  using namespace std;
  using VECTOR::Vector;
  srand(time(nullptr));
  double direction;
  Vector step;
  Vector result(0.0, 0.0);
  int steps = 0;
  double target;
  double dstep;
  int repetitions = 0;
  int minimum = INT_MAX;
  int maximum = 0;
  double average = 0;

  cout << "Podaj liczbę powtórzeń: ";
  cin >> repetitions;

  cout << "Podaj dystans do przejścia (k, aby zakończyć): ";
  while(cin >> target) {
    cout << "Podaj długość kroku: ";
    if(!(cin >> dstep)) break;

    for(int i = 0; i < repetitions; ++i)
    {
      while(result.magval() < target) {
        direction = rand() % 360;
        step.reset(dstep, direction, Vector::POL);
        result = result + step;
        ++steps;
      }

      minimum = std::min(minimum, steps);
      maximum = std::max(maximum, steps);
      average += steps;

      steps = 0;
      result.reset(0, 0);
    }

    average /= repetitions;

    cout << "Maksymalna liczba kroków: " << max
         << "\nMinimalna liczba kroków: " << min
         << "\nŚrednia liczba kroków: " << average << std::endl;

    steps = 0;
    result.reset(0.0, 0.0);
    cout << "Podaj dystans do przejścia (k, aby zakończyć): ";
  }

  cout << "Koniec!\n";
  cin.clear();
  while(cin.get() != '\n') continue;


  return 0;
}