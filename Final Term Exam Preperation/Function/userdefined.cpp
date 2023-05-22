#include <iostream>
using namespace std;
int func(int a = 20, int b= 20){
    // cout<<a + b;
    return a + b ;
}
int main(){
    int a = 20, b = 20,re;
    re = func();
    cout<<re;
}

