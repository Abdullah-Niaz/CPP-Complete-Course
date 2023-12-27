#include <iostream>
using namespace std;

class Test{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
    
    friend void fun();

};

void fun(){
    Test t; // has-a relationship
    t.a = 20 ;
    t.b = 40;
    t.c = 50;
    cout<<t.a<<endl;
    cout<<t.b<<endl;
    cout<<t.c<<endl;
};
int main(){
    fun();
    return 0;
}