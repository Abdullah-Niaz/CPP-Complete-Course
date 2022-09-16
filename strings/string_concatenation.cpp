#include <iostream>
#include <string.h>
using namespace std;

int main(){
    // char s1[20]="Hello ";
    // char s2[20]="World!";
    // cout<<strcat(s1,s2)<<endl;
    // Print by using the length 
    // cout<<strncat(s1,s2,3);


    // by taking input from the user and concatinate it 
    char s1[20];
    char s2[20];
    cout<<"Enter the First String"<<endl;
    cin.getline(s1,20);
    cout<<"Concatenate with + "<<endl;
    cout<<"Enter the Second String"<<endl;
    cin.getline(s2,20);

    // cout<< strcat(s1,s2);
    // cout<<strncat(s1,s2,3);
   return 0; 
} ;