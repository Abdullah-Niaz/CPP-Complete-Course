#include <iostream>
#include  <stdio.h>
using namespace std;

int main(){
    int a[] = {1,2,3,4,5,6};
    for(auto x:a){
        cout<<x<<endl;
    }
    // cout<<sizeof(a)<<endl;
    // printf("%d\n",a[3]);
    return 0;
}