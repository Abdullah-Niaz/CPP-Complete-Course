#include <iostream>
using namespace std;

void is_even(int n   ){
    if(n% 2 == 0 ){
        cout << "Even";
    }
    else{
        cout<<"Odd";
    }
}
int main(){
    is_even(3);
    return 0;
}