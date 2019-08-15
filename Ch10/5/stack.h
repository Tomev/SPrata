//
// Created by Tomev on 15.08.2019.
//

#ifndef INC_5_STACK_H
#define INC_5_STACK_H

struct customer {
  char fullname[35];
  double payment;
};

typedef customer Item;

class Stack {
  private:
    enum { MAX = 10};
    Item items[MAX];
    int top;
  public:
    Stack();
    bool isEmpty() const;
    bool isFull() const;
    bool push(const Item &item);
    bool pop(Item &item);

};

#endif //INC_5_STACK_H
