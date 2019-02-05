#include <iostream>

int const MONTHS_NUM = 12;
int main() {
  std::string months[MONTHS_NUM] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  int booksSoldAtMonth[MONTHS_NUM] = {};
  int numberOfBooksSoldThisMonth = 0;
  for(int i = 0; i < MONTHS_NUM; ++i) {
    std::cout << "Input the number of books sold in " << months[i] << " .\n>";
    std::cin >> booksSoldAtMonth[i];
  }
  long booksSum = 0;
  for(int i = 0; i < MONTHS_NUM; ++i)
    booksSum += booksSoldAtMonth[i];
  std::cout << "Books sold through out the year: " << booksSum << ".\n";
  return 0;
}