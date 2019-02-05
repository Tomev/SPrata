#include <iostream>
#include <array>

const int ArSize = 101;
int main() {
  std::array<long double, ArSize> factorials;
  factorials[0] = 1;
  for(int i = 1; i < ArSize; ++i)
    factorials[i] = i * factorials[i - 1];
  std::cout << "100! = " << factorials[ArSize - 1];
  return 0;
}