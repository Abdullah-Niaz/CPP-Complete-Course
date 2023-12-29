#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int &p = a;
    p = 29;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of p: "<<p<<endl;

    return 0;
};