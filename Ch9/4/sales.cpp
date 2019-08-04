#include <iostream>
#include "sales.h"

namespace SALES{

  void setSales(Sales & s, const double ar[], int n){

    if(n == 0){
      s.max = 0;
      s.average = 0;
      s.min = 0;
      for(int i = 0; i < QUARTERS; ++i)
        s.sales[i] = 0;
      return;
    }

    int maxIndex = n > QUARTERS ? QUARTERS : n;

    s.average = 0;

    for(int i = 0; i < maxIndex; ++i){
      s.sales[i] = ar[i];
      s.average += ar[i];
      s.max = s.max > ar[i] ? s.max : ar[i];
      s.min = s.min < ar[i] ? s.min : ar[i];
    }

    s.average /= QUARTERS;

    for(int i = n; i < QUARTERS; ++i){
      s.sales[i] = ar[i];
      s.average += ar[i];
      s.max = s.max > ar[i] ? s.max : ar[i];
      s.min = s.min < ar[i] ? s.min : ar[i];
    }

  }

  void setSales(Sales & s){
    for(int i = 0; i < QUARTERS; ++i){
      std::cout << "Input " << i << " sale.\n>";
      std::cin >> s.sales[i];
      s.average += s.sales[i];
      s.max = s.max > s.sales[i] ? s.max : s.sales[i];
      s.min = s.min < s.sales[i] ? s.min : s.sales[i];
    }
    s.average /= QUARTERS;
  }

  void showSales(const Sales & s){
    using std::cout;

    for(int i = 0; i < QUARTERS; ++i)
      cout << "Quarter " << i << ": " << s.sales[i] << std::endl;

    cout << "Max: " << s.max
         << ",\nMin: " << s.min
         << ",\nAvg: " << s.average << std::endl;
  }
}