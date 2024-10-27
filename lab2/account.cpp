#include <cstring>
#include <iostream>

class Account {
  private:
    int number;
    char name[18];
    char password[6];
    double balance;

    static double yearlyInterestRate;

  public:
    Account(int num, const char *nm, const char *pw);
    void deposit(double amount, const char *pw);
    void withdraw(double amount, const char *pw);
    void calcInterest();
    void show();
};

double Account::yearlyInterestRate = 0.0015;

Account::Account(int num, const char *nm, const char *pw) {
  number = num;
  std::strcpy(name, nm);
  std::strcpy(password, pw);
  balance = 0;
}

void Account::deposit(double amount, const char *pw) {
  if (std::strcmp(password, pw) != 0) {
    std::cout << "Wrong password!" << std::endl;
    return;
  }
  balance += amount;
}

void Account::withdraw(double amount, const char *pw) {
  if (std::strcmp(password, pw) != 0) {
    std::cout << "Wrong password!" << std::endl;
    return;
  }
  if (amount > balance) {
    std::cout << "Insufficient balance!" << std::endl;
    return;
  }
  balance -= amount;
}

void Account::calcInterest() {
  std::cout << "Interest rate: " << yearlyInterestRate << std::endl;
  std::cout << "Interest: " << balance * yearlyInterestRate << std::endl;
}

void Account::show() {
  std::cout << "number: " << number << std::endl;
  std::cout << "name: " << name << std::endl;
  std::cout << "balance: " << balance << std::endl;
}

int main() {
  Account a1(1, "Tom", "123456");
  a1.show();
  std::cout << std::endl;

  std::cout << "After deposit:" << std::endl;
  a1.deposit(1000, "123456");
  a1.show();
  std::cout << std::endl;

  std::cout << "After withdraw:" << std::endl;
  a1.withdraw(100, "123456");
  a1.show();
  std::cout << std::endl;

  std::cout << "Wrong password test:" << std::endl;
  a1.withdraw(100, "111111");
  std::cout << std::endl;

  std::cout << "Excessive withdraw test:" << std::endl;
  a1.withdraw(10000, "123456");
  std::cout << std::endl;

  std::cout << "Calculate interest:" << std::endl;
  a1.calcInterest();
  return 0;
}
