// Solution to problem 10.8 from S. Prata's C++ Primer Plus VI ed.

#include <iostream>
#include "list.h"

void addOne(Item &i){
  std::cout << "Got value: " << i;
  i += 1;
  std::cout << ". After addition: " << i << ".\n";
}

int main() {
  std::cout << "Creating empty list.\n";
  list l = list();
  std::cout << "Is list empty? --> " << l.isEmpty() << "\n";
  std::cout << "Is list full? --> " << l.isFull() << stsd::endl;

  std::cout << "Filling the list.\n";

  for(int i = 0; i < _MAX_LIST_SIZE; ++i) l.add(i);
  std::cout << "Is list empty? --> " << l.isEmpty() << "\n";
  std::cout << "Is list full? --> " << l.isFull() << std::endl;

  std::cout << "Performing add one on list elements.\n";
  l.performOperationOnListsElements(addOne);

  return 0;
}