#include <iostream>
using namespace std;

int main(){
    // statements 
    // if statements 
    string button;
    getline(cin,button);
    if(button =="yes" && button == "Yes"){
        cout<<"Yes you're are ";
    }
    else if (button == "no" && button == "No")
    {
        cout<<"You can't";
    }
    else {
        cout<<"Bye Bye";

    }
    
    
    return 0;
}