#include <iostream>
using namespace std;

int main()
{
    int value;
    cout << "Enter The Number of iteration: ";
    cin >> value;
    for (int i = 0; i <= value; i++)
    {
        cout << "Here is number of iteration: " << i << endl;
    }

    return 0;
}