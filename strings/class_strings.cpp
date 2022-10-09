#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main(){
    
    // string  str = "Hello World";
    
    // getline(cin,str);
    // cout<<str.max_size();
    // str.resize(40);
    // cout<<str.capacity();
    // cout<<str.size();
    // cout<<str.length();
    // str.clear();
    // cout<<str;
    // str.empty();
    // if (str.empty()){
    //     cout<<"String is empty";
    // }
    // else {
    //     cout<<"String is not empty and value is "<<str<<endl;
    // }

    // string str1 = "programming";
    // string str2 = " is most popular among every profession";
    // string str3;
    // str3 = str1 + str2;
    // cout<<str3;
    string str = "hello";
    // // accesing the string using the for loop
    // for(int i=0; str[i] != '\0';i++){
    //     // cout<<str[i] ;
    //     // Another way to acces it in uppar case 
    //     str[i] = str[i] - 32;
    // }
    // cout<<str;

    // Another way of accesing is using the functions 
    // Acessing from the start
    string::iterator it;
    for(it= str.begin(); it != str.end();it++){
        cout<<*it;
        
    }
    
    // Accessing from reverse

    return 0; 
}