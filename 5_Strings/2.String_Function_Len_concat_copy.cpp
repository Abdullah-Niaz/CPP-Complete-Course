#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s1[20] = "Hello World";
    char s2[20] = " I am a student";
    cout<<"Length of s1: "<<strlen(s1)<<endl;
    cout<<"Concatenation of s1,s2: "<<strcat(s1,s2)<<endl;
    cout<<"Copy the S2 to S1: "<<strcpy(s1,s2)<<endl;
    cout<<"Value of s1: "<<s1;
    return 0;
};