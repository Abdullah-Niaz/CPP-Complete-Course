#include <iostream>
using namespace std;

int swapByRefrence(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}
int main(){
    int a =20, b = 30;
    swapByRefrence(a,b);
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
    return 0;
};