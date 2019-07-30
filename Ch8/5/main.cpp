// Solution to problem 8.5 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>

unsigned int numberOfObjects = 5;

template<class T> T maxNum(T array[]){
  T max = array[0];
  for(unsigned int i = 0; i < numberOfObjects; ++i)
    if(array[i] > max) max = array[i];
  return max;
}

int main() {

  double a1[] = {1, 2, 3, 4, 5};
  int a2[] = {1, 2, 5, 7, 9};

  std::cout << "Ar1 max: " << maxNum(a1) << std::endl;
  std::cout << "Ar2 max: " << maxNum(a2) << std::endl;

  return 0;
}