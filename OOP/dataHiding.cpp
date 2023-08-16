#include <iostream>
using namespace std;


class BankAccount {
private:
    double balance;

public:
    void showMenu(){
        cout<<"1.Initial Balance Setup: "<<endl;
        cout<<"2.Deposit: "<<endl;
        cout<<"Check Balance: "<<endl;
    }
    double Initial(double initialBalance) {
        balance = initialBalance;
        return balance;
    }

    double deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
        else{
            cout<<"Must Be Greater then 0";
        }
        return balance;
    }
    double getBalance() {
        return balance;
    }
};

int main() {


    BankAccount Ali;
    double ibal = Ali.Initial(2200);
    double d =  Ali.deposit(2000);
    double b = Ali.getBalance();
    cout<<"Your Inital Balance was: "<<ibal<<"\nYou Deposited: "<<d<<
    "\n& Current Balance is: "<<b;
    return 0;
}
