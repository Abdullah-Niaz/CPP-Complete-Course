#include <iostream>
using namespace  std;
int main(){
    int arr[4] = {3,4,5,6};
    int key;
    cin>>key;
    for (int i = 0; i < 4; i++)
    {
        if(key==arr[i]){
            cout<<"Key found at "<<i;
            return 0;
        }
    }
    
    return 0;  
} 
