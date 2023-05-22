#include <iostream>
using namespace std;

int BinarySearch(int arr[]){
    for (int i = 0; i <=8; i++)
    {
        cout<<arr[i] <<" At the Index: "<<i<<endl;
    }
    
    int l = 0, h = 9, mid, key;
    cout<<"Enter the Key to Check: ";
    cin>>key;
    while (l<=h)
    {
        mid = (l+h)/2;
        if (key == arr[mid]){
            cout<<key << " Value at: "<<mid;
            return 0;
        }
        else if (key< arr[mid]) 
        {
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
        
    }
    

}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    BinarySearch(arr);
    return 0;
}
