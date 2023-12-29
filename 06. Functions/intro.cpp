#include <iostream>
using namespace std;
int compare(int a, int b, int c){
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

int add(int a , int b , int c ){
    return a + b + c ;
}
int main(){
    int x = 20, y = 17 , z = 15, result;
    result = compare(x,y,z);
    cout<<"Here is the result "<< result<<endl;

    int addition = add(4,5,6);
    cout<<"Addition fucntion of three vairables "<<addition<<endl;
    return 0;
}