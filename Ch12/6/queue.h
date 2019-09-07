//
// Created by Tomev on 06.09.2019.
// Headers of Queue and Customer class from S. Prata's C++ Primer Plus VI ed.
//

#ifndef INC_5_QUEUE_H
#define INC_5_QUEUE_H

class Customer{
  public:
    Customer(){ arrive = processTime = 0; }
    void set(long when);
    long when() const {return arrive;}
    int ptime() const {return processTime;}
  private:
    long arrive;
    int processTime;
};

typedef Customer Item;

class Queue {
  public:
    explicit Queue(int qs = Q_SIZE);
    ~Queue();
    bool isEmpty() const;
    bool isFull() const;
    int queueCount() const;
    bool enqueue(const Item &item);
    bool dequeue(Item &item);
  private:
    struct Node {Item item; struct Node *next = nullptr;};
    enum {Q_SIZE = 10};
    Node *front = nullptr;
    Node *rear = nullptr;
    int items;
    const int qsize;
    Queue(const Queue & q) : qsize(0) {}
    Queue &operator=(const Queue & q) { return *this;}
};

#endif //INC_5_QUEUE_H
