// Solution to problem 12.4 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include "stack.h"

int main() {
  using std::cout, std::endl;

  Stack s1(2);
  cout << s1.push(34) << endl;
  cout << s1.push(66) << endl;
  cout << s1.push(3) << endl;
  Stack s2 = s1;
  Stack s3(s2);
  Item i;
  cout << s2.pop(i) << endl;
  cout << s3.pop(i) << endl;
  cout << s3.pop(i) << endl;

  cout << s1.isEmpty() << endl;
  cout << s1.isFull() << endl;
  cout << s2.isEmpty() << endl;
  cout << s2.isFull() << endl;
  cout << s3.isEmpty() << endl;
  cout << s3.isFull() << endl;


  return 0;
}