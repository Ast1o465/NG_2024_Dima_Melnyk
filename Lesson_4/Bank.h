#ifndef BANK_H
#define BANK_H

#include <map>
#include <ctime>
#include <vector>

struct Loan {
    double amount;
    tm dateTaken;
};

struct Deposit {
    double amount;
    tm datePlaced;
};

class Bank {
public:
    Bank();
    void createAccount(int accountId);
    void deleteAccount(int accountId);
    void depositMoney(int accountId, double amount);
    void withdrawMoney(int accountId, double amount);
    void takeLoan(int accountId, double amount);
    void repayLoan(int accountId, double amount);
    void placeDeposit(int accountId, double amount);
    void withdrawDeposit(int accountId, double amount);
    void setCurrentDate(tm newDate);

private:
    std::map<int, double> accounts;
    std::map<int, std::vector<Loan>> loans;
    std::map<int, std::vector<Deposit>> deposits;
    tm currentDate;
};

#endif // BANK_H
