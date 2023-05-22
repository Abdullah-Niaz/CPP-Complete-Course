#include <iostream>
using namespace std;

int main(){
    int arr[] = {12,43,88,69,17,36};
    // int n;
    // cout<<"Enter the Number to Check Prime or composite: ";
    // cin>>n;
    int count  = 0;

    for (int i = 0; i < arr[i] ; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i] % i == 0 )
            {
                cout<<"Prime Values are : "<< i <<endl;
                count++; 
                // break;
            }
            else{
            cout<<"Compsite";
            }
         }
    }
        

    // if(count == 2 ){
    //     cout<<"Verified Prime";
    // }
    // else{
    //     cout<<"Verified Composite";
    // }

    
    return 0;
}