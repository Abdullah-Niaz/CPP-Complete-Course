#include <iostream>
#include  <stdio.h>
using namespace std;

int main(){
    int a[] = {1,2,3,4,5,6};
    for(auto x:a){
        if (x==4){
            break;
            cout<<x<<endl;
        }
    }
    // cout<<sizeof(a)<<endl;
    return 0;
}