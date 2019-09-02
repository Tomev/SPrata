//
// Created by Tomev on 02.09.2019.
// Implementation of Stack class, for ex. 12.4 from S. Prata's C++ Primer Plus VI ed.
//

#include "stack.h"

Stack::Stack(int n) : size(n){
  pitems = new Item[n];
  top = -1;
}

Stack::Stack(const Stack &st) {
 size = st.size;
 pitems = new Item[size];

 for(int i = 0; i < st.top; ++i){
   pitems[i] = st.pitems[i];
 }

 top = st.top;
}

Stack::~Stack() {
  delete[] pitems;
}

bool Stack::isEmpty() const {
  return top == -1;
}

bool Stack::isFull() const {
  return top == size - 1;
}

bool Stack::push(const Item &item) {
  if(isFull()) return false;
  pitems[++top] = item;
  return true;
}

bool Stack::pop(Item &item) {
  if(isEmpty()) return false;
  item = pitems[top--];
  return true;
}

Stack &Stack::operator=(const Stack &st) {
  size = st.size;
  top = st.top;
  pitems = new Item[size];

  for(int i = 0; i < st.top; ++i){
    pitems[i] = st.pitems[i];
  }

  return *this;
}


