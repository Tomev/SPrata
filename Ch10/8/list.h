//
// Created by Tomev on 16.08.2019.
//

#ifndef INC_8_LIST_H
#define INC_8_LIST_H

#include <vector>

typedef int Item;

const unsigned int _MAX_LIST_SIZE = 10;

class list {
  public:
    list();
    bool add(const Item &i);
    bool isEmpty() const;
    bool isFull() const;
    void performOperationOnListsElements(void (*pf)(Item &i));
  private:
    std::vector<Item> _items;

};

#endif //INC_8_LIST_H
