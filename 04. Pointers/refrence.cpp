// Referencing in C++ involves creating a reference variable that acts as an alias for another variable. References provide a way to access the same memory location as the original variable, allowing you to manipulate its value directly. 

// Declaring a reference:
// To declare a reference, you use the & symbol after the variable type.


#include <iostream>
using namespace std;

int main(){
    int x  = 30;
    int &y = x;
    y +=30;
    cout<<"x: "<<x<<endl;
    cout<<"Address of x: "<<&x <<endl;
    cout<<"y: "<<y<<endl;
    cout<<"Address of y: "<<&y<<endl;
    return 0;
}