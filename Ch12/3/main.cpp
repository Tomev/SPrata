// Solution to problem 12.

#include <iostream>
#include "stock.h"

const int STKS = 4;

int main() {
  Stock stocks[STKS] = {
      Stock("NanoSmart", 12, 20),
      Stock("BurakPol", 200, 2),
      Stock("GruzPol", 130, 3.25),
      Stock("FutroPol", 60, 6.5)
  };

  std::cout << "Portfel inwestycyjny:\n";
  int st;
  for(st = 0; st < STKS; ++st)
    std::cout << stocks[st];
    //stocks[st].show();

  const Stock * top = &stocks[0];
  for(st = 0; st < STKS; ++st)
    top = &top->topval(stocks[st]);
  std::cout << "\nNajbardziej wartościowy pakiet:\n";
  top->show();
  return 0;
}