#include <iostream>
using namespace std;

class Base{
    public:
        void fun1(){
            cout<<"fun1"<<endl;
        }
        void fun2(){
            cout<<"fun2"<<endl;
        }
        void fun3(){
            cout<<"fun3"<<endl;
        }
};

class Child: public Base{
    public:
        void fun4(){
            cout<<"fun4"<<endl;
        }
        void fun5(){
            cout<<"fun5"<<endl;
        }
};

int main(){
    Base *b;
    Child d;
    // b = new Child();
    b = &d;
    b->fun1();
    b->fun2();
    b->fun3();
    return 0;
}