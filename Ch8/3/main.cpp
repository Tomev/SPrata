// Solution to problem 8.3 from S. Prata C++ Primer Plus VI ed.

#include <iostream>
#include <string>

void toUpper(std::string &s){
  for(char & i : s){
    i = toupper(i);
  }
}

int main() {

  std::string input;

  while(true){
    std::cin.sync();
    std::cout << "Podal łańcuch (q, aby skończyć): ";
    getline(std::cin, input);

    if(input == "q") break;

    toUpper(input);
    std::cout << input << std::endl;
  }

  std::cout << "Do widzenia";
  return 0;
}