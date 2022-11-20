#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
int main(){
    
    int x=47385;
    cout<<sizeof(x)<<endl;
    cout << "Type of x : " << typeid(x).name() << endl;
    cout<<"Size of int "<<sizeof(int)<<endl;

    char c = 'hello';
    cout<<sizeof(c)<<endl;
    cout << "Type of c : " << typeid(c).name() << endl;
    cout<<"Size of char "<<sizeof(char)<<endl;
    return 0;
}