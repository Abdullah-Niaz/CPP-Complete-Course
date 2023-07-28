#include <iostream>
using namespace std;

int add(int a = 0 , int b = 0 ,int c =0){
    return a + b + c;
}

int main()
{
    int a = add(2,2,2);
    cout<<"Add Functions: "<<a;
    return 0;
};