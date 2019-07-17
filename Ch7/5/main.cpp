// A solution for problem 7.5 from S. Prata C++ Primer Plus.

#include <iostream>

double factorial(unsigned int n){
  if(n == 0 || n == 1) return 1;
  return factorial(n - 1) * n;
}

int main() {
  while(true){
    std::string input;
    std::cout << "Input an integer. q quits.\n>";
    std::cin >> input;
    if(input == "q") break;
    std::cout << "Factorial of " << input << " is " << factorial(std::stoi(input)) << ".\n";
  }
  std::cout << "Finished.\n";
  return 0;
}