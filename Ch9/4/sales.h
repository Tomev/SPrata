#ifndef INC_4_SALES_H
#define INC_4_SALES_H

namespace SALES{

  const int QUARTERS = 4;
  struct Sales {
    double sales[QUARTERS];
    double average;
    double max;
    double min;
  };

  void setSales(Sales & s, const double ar[], int n);
  void setSales(Sales & s);
  void showSales(const Sales & s);
}



#endif //INC_4_SALES_H