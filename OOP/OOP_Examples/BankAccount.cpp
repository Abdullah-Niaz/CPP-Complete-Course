#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    void intial_Balance(double i_balance)
    {
        balance = i_balance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
    }

    double get_balance()
    {
        return balance;
    }
};

int main()
{
    BankAccount ali;
    ali.intial_Balance(500);
    ali.deposit(500);
    ali.withdraw(200);

    cout << "Current balance: " << ali.get_balance() << endl;
    cout<<"\n\n==============\n\n";
    BankAccount hamza;
    hamza.intial_Balance(5500);
    hamza.deposit(300);
    hamza.withdraw(2200);

    cout << "Current balance: " << hamza.get_balance() << endl;
    return 0;
}
