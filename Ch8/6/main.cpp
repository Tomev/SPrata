// Solution to problem 8.6 form S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include <cstring>

bool checkIfEmpty(const unsigned int &arLen){
  if(arLen == 0){
    std::cout << "Array is empty!\n";
    return true;
  }
  return false;
}

template<class comparable> comparable maxn(const comparable ar[], const unsigned int &arLen){
  if(checkIfEmpty(arLen)) return 0;

  comparable maxElement = ar[0];

  for(unsigned int i = 0; i < arLen; ++i)
    maxElement = maxElement < ar[i] ? ar[i] : maxElement;

  return maxElement;
}

char* maxn(char* ar[], const unsigned int &arLen){
  if(checkIfEmpty(arLen)) return nullptr;

  using std::strlen;

  char* longestChar = ar[0];

  for(unsigned int i = 0; i < arLen; ++i)
    longestChar = strlen(longestChar) < strlen(ar[i]) ? ar[i] : longestChar;

  return longestChar;
}

int main() {

  unsigned int intArSize = 5;
  unsigned int doubleArSize = 4;
  unsigned int charArSize = 5;

  int intAr[] = {1, 2, 3, 4, 5};
  double doubleAr[] = {13, 12.3, 54.3, 22.1};
  std::string strings[] = {"a", "eeeee", "dddd", "bb", "ccc"};
  char* charAr[] = {&(strings[0][0]), &(strings[1][0]), &(strings[2][0]), &(strings[3][0]), &(strings[4][0])};




  std::cout << "Max int: " << maxn(intAr, intArSize)
            << ",\nMax double: " << maxn(doubleAr, doubleArSize)
            << ",\nMax len string: " << maxn(charAr, charArSize) << std::endl;

  return 0;
}