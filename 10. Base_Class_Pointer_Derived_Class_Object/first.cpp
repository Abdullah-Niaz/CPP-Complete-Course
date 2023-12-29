#include <iostream>
using namespace std;
class Base{
    public:
        Base(){
            cout<<"Base Class";
        }
};

class Derived:public Base{
    public:
        Derived(){
            cout<<"Derived Class";
        }
};

int main(){
    Base *b;
    b = new Derived();
    return 0;
}