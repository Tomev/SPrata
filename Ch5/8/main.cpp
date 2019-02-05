#include <iostream>
#include <cstring>

const int wordSize = 50;
int main() {
  int wordsNum = 0;
  std::cout << "Input words. Type finish to exit.\n";
  char word[wordSize] = "";
  std::cin >> word;
  while(std::strcmp(word, "finish")) {
    ++wordsNum;
    std::cin >> word;
  }
  std::cout << "Number of input words " << wordsNum << ".";
  return 0;
}