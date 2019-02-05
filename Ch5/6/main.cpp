#include <iostream>

int const MONTHS_NUM = 12;
const int YEARS_NUM = 3;
int main() {
  std::string months[MONTHS_NUM] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  int booksSoldAtMonth[YEARS_NUM][MONTHS_NUM] = {{}, {}, {}};
  for(int y = 0; y < YEARS_NUM; ++y) {
    std::cout << "Year " << y + 1 << ": \n";
    for(int i = 0; i < MONTHS_NUM; ++i) {
      std::cout << "Input the number of books sold in " << months[i] << " .\n>";
      std::cin >> booksSoldAtMonth[y][i];
    }
  }
  long booksSum = 0;
  long booksYearSum = 0;
  for(int y = 0; y < YEARS_NUM; ++y) {
    for(int i = 0; i < MONTHS_NUM; ++i)
      booksYearSum += booksSoldAtMonth[y][i];
    booksSum += booksYearSum;
    std::cout << "Books sold in year " << y + 1 << ": " << booksYearSum << ".\n";
    booksYearSum = 0;
  }
  std::cout << "Books sold through out " << YEARS_NUM << " year(s): " << booksSum << ".\n";
  return 0;
}