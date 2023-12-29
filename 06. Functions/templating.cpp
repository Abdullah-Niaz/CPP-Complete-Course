#include <iostream>
using namespace std;
template <class T>

T max(T a, T b , T c){
    
    return a + b + c;
};

int main(){
    int a = max(2,3,4);
    float b = max(2.2,3.3,4.4);
    cout<<"Integer Value: "<< a<<endl;
    cout<<"Float Value: "<< b<<endl;

    return 0;
}