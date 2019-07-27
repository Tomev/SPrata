// Solution to problem 8.1 from S. Prata C++ Primer Plus VI ed.

#include <iostream>
#include <cmath>

static unsigned int numberOfCallsSoFar = 0;

void printString(std::string *s, bool additionalParameter = false){
  unsigned int numberOfRepetitions = 1;

  if(additionalParameter){
    numberOfRepetitions = std::max(numberOfRepetitions, numberOfCallsSoFar);
  }

  for(unsigned int i = 0; i < numberOfRepetitions; ++i)
    std::cout << *s << std::endl;

  ++numberOfCallsSoFar;
}


int main() {

  std::string s = "nanana";

  printString(&s);
  printString(&s);

  printString(&s, true);

  return 0;
}