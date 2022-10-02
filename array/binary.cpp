#include <iostream>
using namespace std;
int main(){
    int arr[5] = {3,4,5,6,9};
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    int key;
    cout<<"Enter the Key to find out "<<endl;
    cin>>key;
    int l = 3 , h = 9,mid ;
    while (l<=h)
    { 
        mid = (l+h)/2;
        if(arr[mid] == key ){
            cout<<"key found at index "<<mid;
        }
        else if (arr[mid] < key )        
        {
            l = mid + 1 ;
        }
        else{
            h = mid - 1;
        }
}

    
    return 0;

} 