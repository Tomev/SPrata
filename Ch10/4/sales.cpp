//
// Created by Tomev on 14.08.2019.
//

#include <limits>
#include <iostream>
#include "sales.h"

SALES::Sales::Sales(const double *ar, const int &n)
    : max(std::numeric_limits<double>::min()), min(std::numeric_limits<double>::max()), average(0) {
  if(n == 0){
    max = 0;
    average = 0;
    min = 0;
    for(double & sale : sales)
      sale = 0;
    return;
  }

  int maxIndex = n > QUARTERS ? QUARTERS : n;

  for(int i = 0; i < maxIndex; ++i){
    sales[i] = ar[i];
    average += ar[i];
    max = max > ar[i] ? max : ar[i];
    min = min < ar[i] ? min : ar[i];
  }

  average /= QUARTERS;

  for(int i = n; i < QUARTERS; ++i){
    sales[i] = ar[i];
    average += ar[i];
    max = max > ar[i] ? max : ar[i];
    min = min < ar[i] ? min : ar[i];
  }
}

SALES::Sales::Sales() : max(std::numeric_limits<double>::min()), min(std::numeric_limits<double>::max()), average(0) {
  for(int i = 0; i < QUARTERS; ++i){
    std::cout << "Input " << (i + 1) << " sale.\n>";
    std::cin >> sales[i];
    average += sales[i];
    max = max > sales[i] ? max : sales[i];
    min = min < sales[i] ? min : sales[i];
  }
  average /= QUARTERS;
}

void SALES::Sales::show() const {
  using std::cout;

  for(int i = 0; i < QUARTERS; ++i)
    cout << "Quarter " << i << ": " << sales[i] << std::endl;

  cout << "Max: " << max
       << ",\nMin: " << min
       << ",\nAvg: " << average << std::endl;
}