#include <iostream>
using namespace std;

class Car{
    public:
        virtual void display()=0;
};

class Range: public Car{
    public:
        void display(){
            cout<<"Car Started";
        }
};

int main(){
    Car *c;
    c = new Range();
    c->display();
    return 0;
} 