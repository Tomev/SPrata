#include "bankAccount.h"

#include <iostream>
#include <utility>

bankAccount::bankAccount() : _balance(0), _surname(""), _number("") {}

bankAccount::bankAccount(std::string surname, std::string accountNumber, double balance)
  : _surname(std::move(surname)), _number(std::move(accountNumber)), _balance(balance) {}

void bankAccount::deposit(const double &amount) {
  _balance += amount;
}

void bankAccount::printBalance() {
  std::cout << _surname << "'s account: " << _balance << " $\n";
}

void bankAccount::withdraw(const double &amount) {
  _balance -= amount;
}

void bankAccount::initialize(std::string surname, std::string accountNumber, double balance) {
  _balance = balance;
  _surname = std::move(surname);
  _number = std::move(accountNumber);
}

