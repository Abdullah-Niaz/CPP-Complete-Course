// Run-Time Type Identification (RTTI) is a feature in C++ that allows you to obtain the type information of an object during program execution. This can be useful when using dynamic typing, where the type of an object can change at runtime.

//! There are two main mechanisms for RTTI in C++:
    //Todo Typeid opeartor
    //Todo dynamic_cast operator

//? typeid operator
// typeid is an operator that returns a reference to an object of type type_info, which contains information about the type of the object. The header file <typeinfo> should be included to use typeid.

#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    int a = 20;
    cout<<typeid(a).name();
    return 0;
}