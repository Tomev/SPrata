// Solution to problem 12.6 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"
const int MIN_PER_HR = 60;
bool newCustomer(double x);

int main() {
  using std::cin, std::cout, std::endl, std::ios_base;
  std::srand(std::time(nullptr));

  cout << "Studium przypadku: bankomat banku Stu Kas\nPodaj maksymalną długość kolejki: ";
  int qs;
  cin >> qs;

  Queue line(qs);
  Queue line2(qs);

  /*
  cout << "Podaj symulowany czas w godiznach: ";
  int hours;
  cin >> hours;
  */

  int hours = 100;
  long cycleLimit = MIN_PER_HR * hours;

  /*
  cout << "Podaj średnią liczbę klientów na godzinę: ";
  double perHour;
  cin >> perHour;
  */

  long served = 0;
  long line_wait = 0;
  double perHour = 21;
  const double stepSize = 1;

  do{

    perHour -= stepSize;
    Item temp;
    long turnaways = 0;
    long customers = 0;
    served = 0;
    long sum_line = 0;
    int wait_time = 0;
    line_wait = 0;

    double min_per_cust;
    min_per_cust = MIN_PER_HR / perHour;

    for(int cycle = 0; cycle < cycleLimit; ++cycle){

      if(newCustomer(min_per_cust)){
        if(line.isFull() && line2.isFull()){
          ++turnaways;
        }
        else{
          ++customers;
          temp.set(cycle);

          // There are too many levels, thus should be separated into methods in a class.
          if(line.queueCount() > line2.queueCount()) line2.enqueue(temp);
          else line.enqueue(temp);

        }
      }

      if(wait_time <= 0 && !line.isEmpty()){
        line.dequeue(temp);
        wait_time = temp.ptime();
        line_wait += cycle - temp.when();
        ++served;
      }

      if(wait_time <= 0 && !line2.isEmpty()){
        line2.dequeue(temp);
        wait_time = temp.ptime();
        line_wait += cycle - temp.when();
        ++served;
      }

      if(wait_time > 0) --wait_time;
      sum_line += line.queueCount() + line2.queueCount();
    }

    if(customers > 0){
      cout << "\nŚrednia liczba klientów: " << perHour << endl;
      cout << "liczba klientów przyjętych: " << customers << "\nliczba klientów obsłużonych: " << served << endl
           << "\nliczba klientów odesłanych: " << turnaways << "\nśrednia długość kolejki: ";
      cout.precision(2);
      std::cout.setf(ios_base::fixed, ios_base::floatfield);
      std::cout.setf(ios_base::showpoint);
      cout << (double) sum_line / cycleLimit << endl << "średni czas oczekiwania: " << (double) line_wait / served
           << " minut.\n";
    }
    else
      cout << "Brak klientów.\n";

    while(!line.isEmpty()){
      line.dequeue(temp);
      line2.dequeue(temp);
    }

  } while((double) line_wait / served > 1);

  cout << "Gotowe!\n";

  return 0;
}

bool newCustomer(double x){
  return (std::rand() * x / RAND_MAX) < 1;
}