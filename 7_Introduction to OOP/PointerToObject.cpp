#include <iostream>
using namespace std;

class Rectangle{
    public:
    int length,breath;

    int area(){
        return length * breath;
    }

    int Perameter(){
        return 2 * (length + breath);
    }
};

int main(){
    Rectangle r;
    Rectangle *p;
    p = &r;
    r.length = 10;
    r.breath = 20;
    cout<<"Area is: "<<r.area()<<endl;
    cout<<"Parameter is: "<<r.Perameter();

    cout<<"\nRuntime Change of Values Using Pointers\n";

    p->length  = 20;
    p->breath = 30;
    cout<<"Area is: "<<p->area()<<endl;
    cout<<"Parameter is: "<<p->Perameter();

    return 0;
};