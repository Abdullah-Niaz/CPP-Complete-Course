#include <iostream>
using namespace std;

int main(){
    string s,y;
    // cin>>s;
    getline(cin,s);
    cout<<"Value os "<<s;
    cin.ignore();
    cout<<"Enter ONce More: ";
    // cin>>y;
    getline(cin,y);
    cout<<"Value of y: "<<y;
    return 0;
};