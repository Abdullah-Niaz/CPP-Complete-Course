#include <iostream>
using namespace std;

int PalindRome(){
    int n,rev=0,r;
    cout<<"Enter the Number to Check the Plaindrome: ";
    cin>>n;
    int m = n;
    while (n > 0)   
    {
        r = n % 10;
        n = n / 10;
        rev = (rev * 10) + r;
    }
    if(rev == m){
        cout<<"Palindrome: "<<rev;
    }
    else{
        cout<<"Not Palindrome: "<<rev;
    }
    // return rev;
    
}

int main(){
    PalindRome();
    return 0;
}