#include <iostream>
using namespace std;

void Coffie(int brain){
    if (brain == 1){
        cout<<"Keep Coding ";
    }
    else{
        cout<<"Order Coffe";
    }
}

int main(){
    int brain;
    cout<<"Enter the Brain Energy False(0) & True(1): ";
    cin>>brain;
    Coffie(brain);
    return 0;
}