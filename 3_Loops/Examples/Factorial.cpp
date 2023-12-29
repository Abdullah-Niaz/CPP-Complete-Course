#include <iostream>
using namespace std;

int main(){
    int number,factorial =1 ;
    cout<<"Enter the Number to Calculate the Factorial: ";
    cin>>number;
    for (int i = 1 ; i <= number; i++)
    {
        factorial *=i;
    }
    cout<<"Factorial of "<< number<<" is: "<<factorial;
    
    return 0;
}