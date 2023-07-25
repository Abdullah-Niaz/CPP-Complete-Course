#include <iostream>
using namespace std;

void showMenu()
{
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Amount" << endl;
    cout << "3. Withdraw Amount" << endl;
    cout << "4. Exit Atm" << endl;
};
int main()
{
    int option;
    double balance = 1500;
    do
    {
        showMenu();
        cout << "Choose Option: ";
        cin >> option;
        system("cls");
        switch (option)
        {
        case 1:
            cout << "Your Current Balance is: " << balance << "$" << endl;
            break;

        case 2:
            cout << "Enter the Balance: ";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;

        case 3:
            cout << "Enter the Amount to WithDraw: ";
            double withdrawAmount;
            cin>>withdrawAmount;
            if (withdrawAmount <= balance)
            {
                balance -= withdrawAmount;
            }
            else
            {
                cout << "Not Enough Money To Deposit";
            }
            break;
        }
    } while (option != 4);

    return 0;
};
