// Solution to problem 9.2 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>

const int ArSize = 10;

void strcount(const std::string &str);

int main() {
  using namespace std;
  std::string input;

  cout << "Wprowadź wiersz:\n";
  getline(cin, input);

  while(!input.empty()){
    strcount(input);
    cout << "Wprowadź następny wiersze (wiersz pusty kończy wprowadzanie):\n";
    getline(cin, input);
  }

  cout << "Koniec\n";
  return 0;
}

void strcount(const std::string &str){
  using namespace std;
  static int total = 0;
  int count = 0;

  cout << "\"" << str << "\" zawiera ";

  count += str.length();

  total += count;
  cout << count << " znaków\n";
  cout << "Łącznie " << total << " znaków\n";

}