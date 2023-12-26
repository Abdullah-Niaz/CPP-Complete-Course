#include <iostream>
using namespace std;

class default_Constructor
{
public:
    int r;
    const int value = 20;
};

int main()
{
    default_Constructor def; // object

    def.r = 30;

    int r = def.r;       // Stored niside the variable
    int val = def.value; // Same here as above

    cout << "Value of R is: " << r << endl;
    cout << "Value of value is: " << val << endl;
    return 0;
};