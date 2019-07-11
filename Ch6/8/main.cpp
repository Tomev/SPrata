#include <iostream>
#include <fstream>


int main() {

  std::fstream file("D:\\Coding\\C++\\SPrata\\Ch6\\8\\input.txt", std::fstream::in);

  if(!file) return 1;

  char c;

  unsigned int numberOfCharacters = 0;

  while (file >> std::noskipws >> c) {
    ++numberOfCharacters;
  }

  std::cout << numberOfCharacters;

  file.close();

  return 0;
}