#include "Bank.h"
#include <iostream>
#include <ctime>

// ...existing code...

Bank::Bank() {
    // Initialize current date
    time_t now = time(0);
    currentDate = *localtime(&now);
}

void Bank::createAccount(int accountId) {
    accounts[accountId] = 0.0;
    std::cout << "Account " << accountId << " created." << std::endl;
}

void Bank::deleteAccount(int accountId) {
    accounts.erase(accountId);
    loans.erase(accountId);
    deposits.erase(accountId);
    std::cout << "Account " << accountId << " deleted." << std::endl;
}

void Bank::depositMoney(int accountId, double amount) {
    accounts[accountId] += amount;
    std::cout << "Deposited " << amount << " to account " << accountId << "." << std::endl;
}

void Bank::withdrawMoney(int accountId, double amount) {
    if (accounts[accountId] >= amount) {
        accounts[accountId] -= amount;
        std::cout << "Withdrew " << amount << " from account " << accountId << "." << std::endl;
    } else {
        std::cout << "Insufficient funds in account " << accountId << "." << std::endl;
    }
}

void Bank::takeLoan(int accountId, double amount) {
    accounts[accountId] -= amount;
    loans[accountId].push_back({amount, currentDate});
    std::cout << "Loan of " << amount << " taken for account " << accountId << "." << std::endl;
}

void Bank::repayLoan(int accountId, double amount) {
    accounts[accountId] += amount;
    // Logic to repay loans
    for (auto it = loans[accountId].begin(); it != loans[accountId].end(); ++it) {
        if (it->amount == amount) {
            loans[accountId].erase(it);
            break;
        }
    }
    std::cout << "Loan of " << amount << " repaid for account " << accountId << "." << std::endl;
}

void Bank::placeDeposit(int accountId, double amount) {
    accounts[accountId] += amount;
    deposits[accountId].push_back({amount, currentDate});
    std::cout << "Deposit of " << amount << " placed in account " << accountId << "." << std::endl;
}

void Bank::withdrawDeposit(int accountId, double amount) {
    if (accounts[accountId] >= amount) {
        accounts[accountId] -= amount;
        // Logic to withdraw deposits
        for (auto it = deposits[accountId].begin(); it != deposits[accountId].end(); ++it) {
            if (it->amount == amount) {
                deposits[accountId].erase(it);
                break;
            }
        }
        std::cout << "Deposit of " << amount << " withdrawn from account " << accountId << "." << std::endl;
    } else {
        std::cout << "Insufficient funds in account " << accountId << "." << std::endl;
    }
}

void Bank::setCurrentDate(tm newDate) {
    currentDate = newDate;
    // Logic to recalculate changes for all accounts relative to the new date
    std::cout << "Current date set to " << asctime(&newDate);
}
