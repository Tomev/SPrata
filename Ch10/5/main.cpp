// Solution to problem 10.5 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include <cstring>
#include "stack.h"


int main() {

  double sum = 0;
  int i = 0;

  Stack s = Stack();

  while(!s.isFull()){
    customer cust = customer();
    cust.payment = (double)rand();
    auto str = ("Customer " + std::to_string(i++));
    std::strcpy(cust.fullname, str.c_str());
    s.push(cust);
  }

  customer cust;
  while(!s.isEmpty()){
     s.pop(cust);
     sum += cust.payment;
     std::cout << "Sum: " << sum << std::endl;
  }

  return 0;
}