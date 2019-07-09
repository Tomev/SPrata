#include <iostream>

int main() {
  const int taxThresholdsNumber = 3;
  int taxThresholds[taxThresholdsNumber] = {5000, 10000, 20000};
  int taxPercents[taxThresholdsNumber] = {0, 10, 15};
  int highestTaxPercent = 20;

  std::cout << "Input income.\n>";

  double income = 0.0, tax = 0.0, taxThresholdsSum = 0.0;
  int i = 0;

  for(auto taxThreshold : taxThresholds)
    taxThresholdsSum += taxThreshold;

  while((std::cin >> income) && income >= 0) {
    tax = 0.0;

    if(income > taxThresholdsSum)
      tax += (income - taxThresholdsSum) * highestTaxPercent / 100.0;

    for(i = taxThresholdsNumber; i >= 0; --i) {
      double currentTaxSum = 0;

      for(int j = 0; j <= i; ++j)
        currentTaxSum += taxThresholds[j];

      if(income > currentTaxSum)
        tax += taxPercents[i] * taxThresholds[i] / 100.0;
    }
    std::cout << "The tax for this income is: " << tax << ".\nInput another input.\n>";

  }
  return 0;
}