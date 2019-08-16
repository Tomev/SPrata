//
// Created by Tomev on 16.08.2019.
//

#include "list.h"

list::list() : _items(std::vector<Item>()) {}

bool list::add(const Item &i) {
  if(isFull()) return false;
  _items.push_back(i);
  return true;
}

bool list::isEmpty() const {
  return _items.empty();
}

bool list::isFull() const {
  return _items.size() == _MAX_LIST_SIZE;
}

void list::performOperationOnListsElements(void (*pf)(Item &)) {
  for(auto val : _items) pf(val);
}


