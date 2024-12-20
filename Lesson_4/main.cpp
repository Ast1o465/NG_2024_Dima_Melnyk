#include "Bank.h"
#include <iostream>

void printMenu() {
    std::cout << "1. Create Account\n";
    std::cout << "2. Delete Account\n";
    std::cout << "3. Deposit Money\n";
    std::cout << "4. Withdraw Money\n";
    std::cout << "5. Take Loan\n";
    std::cout << "6. Repay Loan\n";
    std::cout << "7. Place Deposit\n";
    std::cout << "8. Withdraw Deposit\n";
    std::cout << "9. Set Current Date\n";
    std::cout << "0. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    Bank bank;
    int choice, accountId;
    double amount;
    tm newDate = {};

    while (true) {
        printMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter account ID: ";
                std::cin >> accountId;
                bank.createAccount(accountId);
                break;
            case 2:
                std::cout << "Enter account ID: ";
                std::cin >> accountId;
                bank.deleteAccount(accountId);
                break;
            case 3:
                std::cout << "Enter account ID: ";
                std::cin >> accountId;
                std::cout << "Enter amount: ";
                std::cin >> amount;
                bank.depositMoney(accountId, amount);
                break;
            case 4:
                std::cout << "Enter account ID: ";
                std::cin >> accountId;
                std::cout << "Enter amount: ";
                std::cin >> amount;
                bank.withdrawMoney(accountId, amount);
                break;
            case 5:
                std::cout << "Enter account ID: ";
                std::cin >> accountId;
                std::cout << "Enter amount: ";
                std::cin >> amount;
                bank.takeLoan(accountId, amount);
                break;
            case 6:
                std::cout << "Enter account ID: ";
                std::cin >> accountId;
                std::cout << "Enter amount: ";
                std::cin >> amount;
                bank.repayLoan(accountId, amount);
                break;
            case 7:
                std::cout << "Enter account ID: ";
                std::cin >> accountId;
                std::cout << "Enter amount: ";
                std::cin >> amount;
                bank.placeDeposit(accountId, amount);
                break;
            case 8:
                std::cout << "Enter account ID: ";
                std::cin >> accountId;
                std::cout << "Enter amount: ";
                std::cin >> amount;
                bank.withdrawDeposit(accountId, amount);
                break;
            case 9:
                std::cout << "Enter year: ";
                std::cin >> newDate.tm_year;
                newDate.tm_year -= 1900; // Year since 1900
                std::cout << "Enter month: ";
                std::cin >> newDate.tm_mon;
                newDate.tm_mon -= 1; // Month (0-11)
                std::cout << "Enter day: ";
                std::cin >> newDate.tm_mday;
                bank.setCurrentDate(newDate);
                break;
            case 0:
                std::cout << "Press Enter to exit...";
                std::cin.ignore();
                std::cin.get();
                return 0;
            default:
                std::cout << "Invalid option. Please try again.\n";
                break;
        }
    }

    return 0;
}
