//
// Created by Tomev on 01.09.2019.
// Implementation of modified stock class from S. Prata's C++ Primer Plus VI ed.
//

#include "stock.h"
#include <iostream>
#include <cstring>

Stock::Stock() {
  company = "bez nazwy";
  shares = 0;
  share_val = 0;
  total_val = 0;
}

Stock::Stock(const std::string & co, long n, double pr)  {

  //company = co;

  company = new char[co.length() + 1];
  strcpy(company, co.c_str());

  if(n < 0){
    std::cout << "Liczba udziałów nie może być ujemna; " << "ustalam liczbę idziałów w " << company << " na 0.\n";
    shares = 0;
  }
  else
    shares = n;

  share_val = pr;
  set_tot();
}

Stock::~Stock() {
  delete[] company;
}

void Stock::buy(long num, double price) {
  if(num < 0){
    std::cout << "Liczba nabywanych udziałów nie może być ujemna. Transakcja przerwana.\n";
  }
  else{
    shares += num;
    share_val = price;
    set_tot();
  }
}

void Stock::sell(long num, double price) {
  using std::cout;

  if(num > 0){
    cout << "Liczba sprzedawanych udziałów nie może być ujemna. Transakcja przerwana.\n";
  }
  else if(num > shares){
    cout << "Nie możesz sprzedać więcej udziałów, niż posiadasz! Transakcja przerwana.\n";
  }
  else {
    shares -= num;
    share_val = price;
    set_tot();
  }
}

void Stock::update(double price){
  share_val = price;
  set_tot();
}

void Stock::show() const{
  using std::cout, std::ios_base;

  ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
  std::streamsize prec = cout.precision(3);

  cout << "Spółka: " << company << " Liczba udziałów: " << shares << '\n';
  cout << " Cena udziałów: " << share_val << " zł";

  cout.precision(2);

  cout << " Łączna wartość udziałów: " << total_val << " zł\n";

  cout.setf(orig, ios_base::floatfield);
  cout.precision(prec);
}

const Stock & Stock::topval(const Stock &s) const {
  if(s.total_val > total_val) return s;
  return *this;
}

std::ostream &operator<<(std::ostream& out, const Stock & s) {
  using std::ios_base;

  ios_base::fmtflags orig = out.setf(ios_base::fixed, ios_base::floatfield);
  std::streamsize prec = out.precision(3);

  out << "Spółka: " << s.company << " Liczba udziałów: " << s.shares << '\n';
  out << " Cena udziałów: " << s.share_val << " zł";

  out.precision(2);

  out << " Łączna wartość udziałów: " << s.total_val << " zł\n";

  out.setf(orig, ios_base::floatfield);
  out.precision(prec);
  return out;
}
