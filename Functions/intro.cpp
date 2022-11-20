#include <iostream>
using namespace std;
int add(int a, int b, int c){
    if(a > b && a > c){
        return a;
    }
    else if (b > c)
    {
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int x = 20, y = 17 , z = 15, result;
    result = add(x,y,z);
    cout<<"Here is the result "<< result;
    return 0;
}