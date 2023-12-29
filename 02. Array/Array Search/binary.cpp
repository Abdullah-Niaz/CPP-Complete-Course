#include <iostream>
using namespace std;
int main(){
    int arr[6] = {3,4,5,6,9,12};
    int key;
    cout<<"Enter the Key to find out "<<endl;
    cin>>key;
    int l = 0 , h = 5;
    while (l<=h)
    { 
        int mid = (l+h)/2;
        if(key == arr[mid]){
            cout<<"key found at index "<<mid;
            return 0;
        }
        else if (key < arr[mid])        
        {
            h = mid - 1 ;
        }
        else{
            l = mid + 1;
        }
    
}

    
    return 0;

} 