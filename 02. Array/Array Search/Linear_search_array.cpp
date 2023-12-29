                       // Taking data from user and store it into the array

#include <iostream>
using namespace std;
int main(){
    int key;
    // int A[] = {12,4,5,6,66,77,88,983,374,433},n=10;
    int A[6],n=6;
    cout<<"Enter Array Elements ";
    for(int i=0; i< n; ++i){
        cin>>A[i];
    }
    cout<<"Enter the Key to Find ";
    cin>>key;
    for(int i=0; i<key;++i){
        if(key==A[i]){
            cout<<"Key Found at "<<i<<endl;
            return 0;
        }
    }
    return 0;
}