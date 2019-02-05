#include <iostream>

int main() {

  std::cout << "Input rows number.\n>";
  int rowsNumber = 0;
  std::cin >> rowsNumber;

  for(int i = 1; i < rowsNumber; ++i){

    int j = i;

    for(;j < rowsNumber; ++j){
      std::cout << ".";
    }

    for(j = 0;j <  i; ++j){
      std::cout << "*";
    }

    std::cout << std::endl;
  }



  return 0;
}