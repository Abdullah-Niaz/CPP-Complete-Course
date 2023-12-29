#include <iostream>
using namespace std;


class your;
class my{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        
        friend your;

};
class your{
    public:
        my m;
        void fun(){
            m.a = 20;
            m.b = 40;
            m.c = 50;
            cout<<"Value of a: "<<m.a<<endl;
            cout<<"Value of b: "<<m.b<<endl;
            cout<<"Value of c: "<<m.c<<endl;
        }
};

int main(){
    your y;
    y.fun();
    return 0;
}