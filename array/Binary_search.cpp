// #include <iostream>
// using namespace std;
// int main(){
//     int A[7]= {23,45,56,77,88,88,99};
//     int l=0,h=6, mid,key;
//     cout<<"Enter the key to Find ";
//     cin>>key;
//     while(l<=h){
//         mid=((l+h)/2);
//         cout<<mid;
//         if(A[mid]==key){
//             cout<<"Found at the "<<mid;
//             break;
        
//         }
//         else if(A[mid]<key)
//         {
//             l = mid +1;
//         }
//         else{
//             h = mid - 1;
//        }
//     }
//     return 0;

// }

/******************************************************************************
*****************************/
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