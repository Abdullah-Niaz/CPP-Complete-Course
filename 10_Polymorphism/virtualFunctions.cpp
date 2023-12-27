#include <iostream>
using namespace std;

class Base{
    public:
        virtual void display(){
            cout<<"Base Class Display";
        }
};

class Child:public Base{
    public:
        void display(){
            cout<<"Child Class Display";
        }
};

int main(){
    Base *b = new Child();
    b->display();
    return 0;
}