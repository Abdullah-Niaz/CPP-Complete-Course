#include <iostream>
using namespace std;

int main(){
    int a = 20 , b = 30 , c = 40;
    if(a > b ){
        if (a > c ){
            cout<<"A is greater: "<<a<<endl;
        }
    }
    else if (b > c)
    {
    cout<<"B is greater: "<<b;
    }
    else{
        cout<<"C is greater: "<<c;
    }
    
    return 0;
}