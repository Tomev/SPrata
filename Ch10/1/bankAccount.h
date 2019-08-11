#ifndef INC_1_BANKACCOUNT_H
#define INC_1_BANKACCOUNT_H

#include <string>

class bankAccount {
  public:
    bankAccount();
    bankAccount(std::string surname, std::string accountNumber, double balance);
    void initialize(std::string surname, std::string accountNumber, double balance);
    void printBalance();
    void deposit(const double &amount);
    void withdraw(const double &amount);
  private:
    double _balance;
    std::string _number;
    std::string _surname;

};

#endif //INC_1_BANKACCOUNT_H
