#include <iostream>
#include <string.h>
using namespace std;

int main(){
    // char s1[20] = "Hello World";
    // cout<<strlen(s1)<<endl;
    
    // Taking input from the user and checking the length
    char s1[20];    
    cin.getline(s1,20);
    cout<<strlen(s1);
    return 0; 
} ;