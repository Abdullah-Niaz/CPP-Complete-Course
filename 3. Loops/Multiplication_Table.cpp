#include <iostream>
using namespace std;

int main()
{
    // Table is
    // Value * Length(1,10) = Answer
    // like 6 * 1 = 6

    int table;
    cout << "Enter the Desired Table: ";
    cin >> table;
    for (int i = 1; i <= 10; i++)
    {
        cout << table << " * " << i << " = " << table * i << endl;
    }

    return 0;
}