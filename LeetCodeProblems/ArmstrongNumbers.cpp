#include <iostream>
using namespace std;

// Armstrong:
    //  if we separate the digits of number and then by taking the cube of each digit, combine them togeter.
    //   if the sum equal to the number which we takin then it is called the armstrong number


int main(){
    int a,sum=0,re;
    cout<<"Enter the Number to Check: ";
    cin>>a;
    int n = a;
    while (a > 0)
    {
        re = a % 10;
        a =  a / 10;
        sum  = sum + (re * re * re);
    }
    
    if (n == sum ){
        cout<<"Number is Amstrong";
    }
    else{
        cout<<"Number is not Armstrong";
    }
    return 0;
}