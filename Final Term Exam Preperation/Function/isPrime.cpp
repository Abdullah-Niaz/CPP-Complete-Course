#include <iostream>
using namespace std;

int isPrime(int num){
    for (int i = 2; i <= num/2; i++)
    {
        if(i % 2 == 0){
            cout<<i<<endl;
        }

    }
    
}
int main(){
    int num;
    cout<<"Enter the NO: ";
    cin>>num;
    int re = isPrime(num);
    if(re == 2 ){
        cout<<"Its Prime";
    }
    else{
        cout<<"It's composite";
    }
    return 0;
}
