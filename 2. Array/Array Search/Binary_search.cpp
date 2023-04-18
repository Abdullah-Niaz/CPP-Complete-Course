#include <iostream>
using namespace std;

int main()
{
    int A[10] ={23,34,55,66,454,456,777,888,987,999}, n= 10;
    int num,l=0,h=9;
     int mid;
    cout<<"Enter the Value to Search ";
    cin>>num;
    while(l<=h){
        mid = ((l+h)/2);
        if(A[mid]==num){
            cout<<"-----------------------------------"<<endl<<endl;
            cout<<"Number Found at the index "<<mid<<endl;
            cout<<"-----------------------------------"<<endl<<endl;
            break;
        }
        else if(A[mid]<num){
            l = mid +1;
        }
        else{
            h = mid-1;
        }
    }
    // cout<<mid;
    return 0;
}