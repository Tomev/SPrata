// Solution to problem 7.10 from S. Prata C++ Primer Plus VI ed.

#include <iostream>
#include <vector>

double add(double x, double y){
  return x + y;
}

double subtract(double x, double y){
  return x - y;
}

double multiply(double x, double y){
  return x * y;
}

double divide(double x, double y){
  if(y == 0){
    std::cout << "Division by 0 detected. Abort.";
    return 0;
  }
  return x / y;
}

double calculate(double x, double y, double (*opPtr)(double, double)){
  return opPtr(x, y);
}

int main() {

  std::vector<std::string> operationNames = {"addition", "subtraction", "multiplication", "division"};
  std::vector<double (*)(double, double)> operationPtrs {&add, &subtract, &multiply, &divide};

  using std::cin, std::cout;

  double x = 2.5;
  double y = 10.4;

  while(true){

    cout << "Input first number (Invalid input quits.).\n>";
    cin >> x;
    if(cin.fail()) break;
    cout << "Input second number (Invalid input quits.).\n>";
    cin >> y;
    if(cin.fail()) break;

    for(unsigned int i = 0; i < operationNames.size(); ++i){
      cout << "The result of " << operationNames[i] << " is: " << calculate(x, y, operationPtrs[i]) << std::endl;
    }
  }
}