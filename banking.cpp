#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        // Display menu
        cout << "\nEnter your choice:\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Your choice: ";
        cin >> choice; // Get user choice

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance = withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            cout << "Thank You for Visiting!!" << "\n";
            break;

        default:
            cout << "Invalid Choice" << "\n";
            break;
        }
    } while (choice != 4);

    return 0;
}

void showBalance(double balance)
{
    cout << "Your balance is: $" << setprecision(2) << fixed << balance << "\n";
}

double deposit()
{
    double amount = 0;
    cout << "Enter the amount to deposit: $";
    cin >> amount;
    return amount;
}

double withdraw(double balance)
{
    double amount = 0;
    cout << "Enter the amount to withdraw: $";
    cin >> amount;

    if (amount > balance)
    {
        cout << "Insufficient funds. Withdrawal failed.\n";
        return balance;
    }
    else if (amount < 0)
    {
        cout << "Invalid amount. Withdrawal failed.\n";
        return balance;
    }

    return balance - amount;
}
