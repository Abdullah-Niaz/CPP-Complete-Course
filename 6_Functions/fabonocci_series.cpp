#include <iostream>
using namespace std;

int fabonici(int n)
{
    if (n < 2)
    {
        return 1;
    }
    else
    {
        return fabonici(n - 2) + fabonici(n - 1);
    }
}
int main()
{  
    for (int i = 0; i <= 10; i++)
    {
        cout<<"fabonici of: " << i <<" is: "<< fabonici(i) <<endl;
    }
    
    return 0;
};