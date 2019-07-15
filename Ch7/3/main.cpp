// Solution to problem 7.3 from S. Prata C++ Primer Plus

#include <iostream>
#include <cstring>

struct box{
  char producent[40];
  float height;
  float width;
  float length;
  float volume;
};

void setBoxsVolume(box &b){
  // Assume that height, width and length are set.
  b.volume = b.length * b.width * b.height;
}

void printBox(box b){
  std::cout << "Producent: " << b.producent << std::endl
            << "Length: " << b.length << std::endl
            << "Height: " << b.height << std::endl
            << "Width: " << b.width << std::endl
            << "Volume: " << b.volume << std::endl;
}

int main() {
  box b{ "Box'R'Us", 1, 2, 3 };
  setBoxsVolume(b);
  printBox(b);
  return 0;
}

