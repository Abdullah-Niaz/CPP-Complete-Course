#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Default of Base Class"<<endl;
    }
    Base(int x)
    {
        cout << "param of Base Class"<<endl;
    }
};

class Child : public Base
{
public:
    Child()
    {
        cout << "Default of Child Class"<<endl;
    }

    Child(int x, int y) : Base(x)
    {
       
        cout << "param of Child Class"<<endl;
    }
};
int main()
{
    Child c(10,20);
    return 0;
}