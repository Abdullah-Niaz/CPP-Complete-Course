#include <iostream>
using namespace std;

int main()
{
    int x = -1;

    // Some code
    cout << "Before try \n";
    try
    {
        cout << "Inside try \n";
        if (x < 0)
        {
            throw x;
            cout << "After throw (Never executed) \n";
        }
    }
    catch (int e)
    {
        cout << "Exception Caught "<<e<<endl;
    }

    cout << "After catch (Will be executed) \n";
    return 0;
}
