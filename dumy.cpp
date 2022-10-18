#include <iostream>
#include <string>
using namespace std;

int main(){
     int *ptr;  // integer pointer declaration  
    int marks[10]={10,20,30,40,50,234}; // marks array declaration  
    cout << "Enter the elements of an array :" <<endl;  
    // for(int i=0;i<10;i++)  
    // {  
    //     cin>>marks[i];  
    // }  
    for (int i = 0; i < 10; i++)
    {
        cout<<marks[i]<<endl;
    }
    
    ptr=marks; // both marks and ptr pointing to the same element..  
    cout << "The value of *ptr is :" <<*ptr<<endl;  
    cout << "The value of *marks is :" <<*marks<<endl;
}