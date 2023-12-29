#include <iostream>
using namespace std;

// This is call by value 
int swap(int a, int b){
    a = a + b; // 20 + 30 = 50
    b = a - b; // 50 - 30 = 20
    a = a - b; // 50 - 20 = 30 
}
int main(){
    int a = 20 ,b = 30;
    swap(a,b);
    cout<<"value of a: "<<a<<endl;
    cout<<"value of b: "<<b<<endl;
    return 0;
};