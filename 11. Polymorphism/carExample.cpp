#include <iostream>
using namespace std;

class Base{
    public:
        virtual void start(){
            cout<<"Base Car Started";
        }
};

class Child:public Base{
    public:
        void start(){
            cout<<"Child Car Started";
        }
};

int main(){
    // Child c;
    // Base *b;
    // b = &c;

    Base *b = new Child();
    b->start();
    return 0;
}   