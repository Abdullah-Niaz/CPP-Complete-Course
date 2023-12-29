#include <iostream>
using namespace std;

int main(){
    string user = "AbdulahNiaz@gmail.com";
    int i = user.find('@');
    string name = user.substr(0,i);
    cout<<"UserName is : "<<name;
    return 0;
};  