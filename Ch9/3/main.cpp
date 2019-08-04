// Solution to problem 9.3 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include <cstring>

struct chaff
{
  char dross[20];
  int slag;
};

void printChaff(const chaff &c){
  std::cout << "Dross: " << c.dross << ",\nslag: " << c.slag << std::endl;
}

int main() {

  int arSize = 2;

  // Var2
  // chaff* chaffAr = new chaff[arSize];

  chaff* chaffAr[arSize];
  for(int i = 0; i < arSize; ++i){
    chaffAr[i] = new chaff();
  }

  std::strcpy(chaffAr[0]->dross, "Dupa");
  chaffAr[0]->slag = 0;
  std::strcpy(chaffAr[1]->dross, "Cyce");
  chaffAr[1]->slag = 1;

  for(int i = 0; i < arSize; ++i){
    printChaff(*chaffAr[i]);
  }

  // Var2
  /*
  for(int i = 0; i < arSize; ++i){
    printChaff(chaffAr[i]);
  }
  */



  return 0;
}

