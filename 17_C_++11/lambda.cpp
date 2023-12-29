#include <iostream>
using namespace std;

int main(){
    int a = 20;
    int b =40;  
    int result = [&]() ->auto{return a + b;}();
    cout<<"result: "<<result;
return 0;
}   