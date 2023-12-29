#include <iostream>
using namespace std;

int main(){
    void *null_ptr;
    int a = 20;
    null_ptr = &a;
    cout<<"Value of intger Data Type: "<<null_ptr<<endl;
    float b = 2.2f;
    null_ptr = &b;
    cout<<"Value of Float Data Type: "<<null_ptr<<endl;
    char c  = 'A';
    null_ptr = &c;
    cout<<"Value of Character Data Type: "<<null_ptr<<endl;
    string d = "Hello world";
    null_ptr = &d;
    cout<<"Value of String Data Type: "<<null_ptr<<endl;
    return 0;
}