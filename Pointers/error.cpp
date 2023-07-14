#include <iostream>
using namespace std;

int main(){
    int *p = new int[5];

    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;
    cout<<"Starting Pointer from here: "<<p<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Value at address "<<p + i<<" is: "<<*(p++)<<endl;

    }
    cout<<"Ending pointer here: "<<p<<endl;
    
    
    
    delete []p;
    p = nullptr;
    return 0;
}