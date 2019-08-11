// Solution to problem 10.1 from S. Prata's C++ Primier Plus VI ed.

#include <iostream>
#include "bankAccount.h"

int main() {

  bankAccount acc1 = bankAccount();
  acc1.initialize("Smith", "1", 23923);
  acc1.printBalance();
  double withdrawal = 422;
  std::cout << "Withdrowing " << withdrawal << ".\n";
  acc1.withdraw(withdrawal);
  acc1.printBalance();

  bankAccount acc2 = bankAccount("Jones", "2", 42834);
  acc2.printBalance();
  double deposit = 1029348;
  std::cout << "Depositing " << deposit << ".\n";
  acc2.deposit(deposit);
  acc2.printBalance();

}