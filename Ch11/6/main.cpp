// Solution to problem 11.6 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include <vector>
#include "stonewt.h"

int main() {

  const unsigned int maxSize = 6;
  std::vector<Stonewt> objects = {Stonewt(1), Stonewt(2), Stonewt(30)};

  double newWeight;

  while(objects.size() < maxSize){
    std::cout << "Input new stone size.\n>";
    std::cin >> newWeight;
    objects.emplace_back(Stonewt(newWeight));
  }

  unsigned int maxStoneIndex = 0;
  unsigned int minStoneIndex = 0;
  Stonewt stone11 = Stonewt(11, 0);
  std::vector<unsigned int> indicesOfObjectsGreaterOrEqual11Stones = {};

  for(unsigned int i = 0; i < objects.size(); ++i){

    if(objects[maxStoneIndex] < objects[i]) maxStoneIndex = i;

    if(objects[minStoneIndex] > objects[i]) minStoneIndex = i;

    if(objects[i] >= stone11) indicesOfObjectsGreaterOrEqual11Stones.emplace_back(i);
  }

  std::cout << "Max object: " << objects[maxStoneIndex] << "\nMin object: " << objects[minStoneIndex]
            << "\nObjects greater than 11 stones:\n";

  for(auto val : indicesOfObjectsGreaterOrEqual11Stones)
    std::cout << objects[val] << std::endl;

  std::cout << "Fin\n" << std::endl;
  return 0;
}