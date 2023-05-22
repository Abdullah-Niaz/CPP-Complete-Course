#include <iostream>
using namespace std;

int ArmStrong(){
    int n,d,sum =  0 ;
    cout<<"Enter the Number to Check the ArmStrong: ";
    cin>>n;
    int m = n;
    while (n > 0)
    {
        d = n % 10;
        n = n / 10;
        sum  = sum + ( d * d * d);
    }
    if(m==sum){
        cout<<"ArmStrong: "<<sum<<endl;
    }
    else{
        cout<<"Not ArmStrong: "<<sum<<endl;
    }
    return sum;
}


int main(){
    int ar = ArmStrong();
    cout<<ar<<endl;
    return 0;
}