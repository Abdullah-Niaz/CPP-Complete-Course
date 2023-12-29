#include <iostream>
using namespace std;

int main(){
    //  it is for signle variable. dont forget to delete the memory other wise it will cuase the memory leak
    // int *ptr = new int;
    // *ptr = 20;  
    // *ptr = 40;
    // cout<<"Value of Ptr is : "<<*ptr;
    // delete ptr;

    // it is for array 

    int *ptr = new int[10];
    system("cls");
    for (int i = 0; i <= 10; i++)
    {
        ptr[i] = i * 10;
    }

    for (int i = 0; i <= 10; i++)
    {
        cout<<"Value at index: "<<i <<" is: "<<ptr[i]<<endl;
    }
    
    

    return 0;
};