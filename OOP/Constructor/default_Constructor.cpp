#include <iostream>
using namespace std;

class default_Constructor{
    public:
    int r ;
    const int value = 20;

};

int main(){
    default_Constructor def;
    int r = def.r;
    int val = def.value;
    cout<<"Value of R is: "<<r<<endl;
    cout<<"Value of value is: "<<val<<endl;
    return 0;
};