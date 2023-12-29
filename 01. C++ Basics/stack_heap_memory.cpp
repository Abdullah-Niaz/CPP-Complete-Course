#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
int hello(){
    int a = 100;
    return a;
}
int main(){
    int a;
    int b = 20;
    int *p = &b;
    int d = hello();
    cout<<typeid(a).name();
    return 0;
}