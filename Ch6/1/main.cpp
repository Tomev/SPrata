#include <iostream>
#include <cctype>

char reverseCase(char c) {
  if(!isalpha(c)) return ' ';
  if(islower(c)) return toupper(c);
  else if(isupper(c)) return tolower(c);
}

int main() {
  std::cout << "Input data. @ quits.\n";
  std::string temp = "";
  while((std::cin >> temp) and temp != "@") {
    for(int i = 0; i < temp.size(); ++i) {
      if(isdigit(temp[i])) continue;
      else if(isalpha(temp[i])) std::cout << reverseCase(temp[i]);
      else std::cout << temp[i];
    }
    std::cout << std::endl;
  }
  return 0;
}