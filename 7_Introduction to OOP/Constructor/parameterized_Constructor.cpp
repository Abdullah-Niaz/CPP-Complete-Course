#include <iostream>
using namespace std;

class perametrized_Constructor
{
public:
    int a, b, c;

    perametrized_Constructor()
    {
        cout << "Default Constructor";
        a = 20, b = 30, c = 40;
        show();
    }

    perametrized_Constructor(int a, int b, int c)
    {
        cout << "Perametrized Constructor";
        this->a = a;
        this->b = b;
        this->c = c;
        show();
    }
    void show()
    {
        cout << "\nFunction which we are going to call inside the constructor to check it's working";
    }
};
int main()
{
    int value;
    cout << "Enter the Value to Check the Type of Constructor: ";
    cin >> value;
    if (value == 1)
    {
        /* code */
        perametrized_Constructor obj;
        obj;
    }
    else
    {
        perametrized_Constructor ob(20, 30, 40);
        ob;
    }

    return 0;
};