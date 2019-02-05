#include <iostream>
#include <cstring>

int main() {
  int wordsNum = 0;
  std::cout << "Input words. Type finish to exit.\n";
  std::string word = "";
  std::cin >> word;
  while(word != "finish") {
    ++wordsNum;
    std::cin >> word;
  }
  std::cout << "Number of input words " << wordsNum << ".";
  return 0;
}