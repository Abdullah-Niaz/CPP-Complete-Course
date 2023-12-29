// Pointer: Pointer is variable which is used to store the address of other variable. We intilize it with asterick * 

// int x = 20 
// Three steps: 
        // 1. Declaration int *p;
        // 2. inlization p = &x;
        // 3. Derefrencing cout<<*P;
#include <iostream>
using namespace std;

int main(){
    int x = 20;
    // 1. Declartion 
    int *p;
    
    // 2. inlization 
    p = &x;


    cout<<"Value of x: "<<x<<endl;
    cout<<"Addres of x: "<<&x<<endl;
    cout<<"Value of pointer p : "<<p<<endl;
    cout<<"Addres of pointer p : "<<&p<<endl;

    
    cout<<"Derefrencing: "<<*p<<endl;


    return 0;
}