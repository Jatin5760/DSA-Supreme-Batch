#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string depositorName; // Name of the depositor
    long accountNumber;   // Account number (using long for larger range)
    string accountType;   // Type of account (e.g., Savings, Checking)
    double balance;       // Balance amount in the account

public:
    // Constructor to assign initial values
    BankAccount(string name, long accNumber, string type, double initialBalance)
    {
        depositorName = name;
        accountNumber = accNumber;
        accountType = type;
        // Ensure initial balance is non-negative
        if (initialBalance >= 0)
        {
            balance = initialBalance;
        }
        else
        {
            balance = 0; // Default to 0 if invalid
            cout << "Invalid initial balance. Set to 0." << endl;
        }
    }

    // Method to deposit an amount
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
        }
        else
        {
            cout << "Invalid deposit amount. Amount must be positive." << endl;
        }
    }

    // Method to withdraw an amount after checking balance
    void withdraw(double amount)
    {
        if (amount > 0)
        {
            if (amount <= balance)
            {
                balance -= amount;
                cout << "Withdrew $" << amount << ". New balance: $" << balance << endl;
            }
            else
            {
                cout << "Insufficient balance. Current balance: $" << balance << endl;
            }
        }
        else
        {
            cout << "Invalid withdrawal amount. Amount must be positive." << endl;
        }
    }

    // Method to display name and balance
    void display() const
    {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

// Example usage in main function
int main()
{
    // Create a bank account with initial values
    BankAccount account("John Doe", 123456789, "Savings", 1000.50);

    // Test the methods
    account.display();         // Display initial state
    account.deposit(500.25);   // Deposit money
    account.withdraw(200.75);  // Withdraw money
    account.display();         // Display updated state
    account.withdraw(2000.00); // Attempt to withdraw more than balance

    return 0;
}