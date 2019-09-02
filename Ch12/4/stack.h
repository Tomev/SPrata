//
// Created by Tomev on 02.09.2019.
// Header of stack class from S. Prata's C++ Primer Plus VI ed.
//

#ifndef INC_4_STACK_H
#define INC_4_STACK_H

typedef unsigned int Item;

class Stack {
  public:
    explicit Stack(int n = MAX);
    Stack(const Stack & st);
    ~Stack();
    bool isEmpty() const;
    bool isFull() const;
    bool push(const Item & item);
    bool pop(Item & item);
    Stack & operator=(const Stack & st);
  private:
    enum {MAX = 10};
    Item * pitems;
    int size;
    int top;
};

#endif //INC_4_STACK_H
