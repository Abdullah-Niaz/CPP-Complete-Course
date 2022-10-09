#include <iostream>
#include <string>
using namespace std;
int main(){
    
    string  str = "Hello World";
    
    // getline(cin,str);
    // cout<<str.max_size();
    // str.resize(40);
    // cout<<str.capacity();
    // cout<<str.size();
    // cout<<str.length();
    // str.clear();
    // cout<<str;
    str.empty();
    if (str.empty()){
        cout<<"String is empty";
    }
    else {
        cout<<"String is not empty and value is "<<str<<endl;
    }
    return 0; 
}