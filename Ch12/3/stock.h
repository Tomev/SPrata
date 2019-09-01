//
// Created by Tomev on 01.09.2019.
// Header of modified stock class from S. Prata's C++ Primer Plus VI ed.
//

#ifndef INC_3_STOCK_H
#define INC_3_STOCK_H

#include <iostream>

class Stock {
  public:
    Stock();
    Stock(const std::string & co, long n = 0, double pr = 0);
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock & topval(const Stock & s) const;

    friend std::ostream & operator<<(std::ostream & out, const Stock & s);

  private:
    //std::string company;
    char * company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
};

#endif //INC_3_STOCK_H
