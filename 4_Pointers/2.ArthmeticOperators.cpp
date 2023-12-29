#include <iostream>
using namespace std;

int main(){
    int a = 20;
    int *p = &a;
    cout<<"Size of int data type in MySystem: "<<sizeof(int)<<endl;
    cout<<"Value of P which is Address: "<<p<<endl;
    cout<<"Size of P Before increment: "<<sizeof(p)<<endl;
    cout<<"Increment of 2 in Value of P which is Address: "<<p+1<<endl;


    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<"Value of P which is Address: "<<p<<endl;
    // cout<<"Size of P Before increment: "<<sizeof(p);
    // cout<<"Increment of 2 in Value of P which is Address: "<<p+1<<endl;
    // cout<<*p<<endl;


    return 0;
}