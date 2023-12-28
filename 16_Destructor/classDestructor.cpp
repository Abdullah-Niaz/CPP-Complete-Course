#include <iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout<<"Base Class Constructor"<<endl;
        }
        ~Base(){
            cout<<"Base Class Destructor"<<endl;
        }
};

class Derived:public Base{
    public:
        Derived(){
            cout<<"Derived Class Constructor"<<endl;
        }

    ~Derived(){
        cout<<"Derived Class Destructor"<<endl;
    }
};

int main(){
    Derived *d = new Derived();
    delete d;
    return 0;
}