// Encapsulation: Bundling of data (private holderName, balance) and methods (deposit, withdraw, getBalance) 
// that operate on the data within a single unit (Account class).
// Access Specifiers (private): Restricts direct access to data members (holderName, balance) from outside the class, 
// ensuring data integrity and security.

#include <iostream>
using namespace std;

// Encapsulated class
class Account {
private:
    string holderName;
    double balance;

public:
    // Constructor
    Account(string name) {
        holderName = name;
        balance = 0.0;
    }

    // Methods to encapsulate data
    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
            balance -= amount;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    // Using encapsulated class
    Account acc("John Doe");

    acc.deposit(1000);
    acc.withdraw(500);

    cout << "Current Balance: $" << acc.getBalance() << endl;

    return 0;
}
