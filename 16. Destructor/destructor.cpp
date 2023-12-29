#include <iostream>
using namespace std;

class Demo{
    public:
        Demo(){
            cout<<"Base Class Constructor"<<endl;
        }
        ~Demo(){
            cout<<"Base Class Destructor"<<endl;
        }
};

int main(){
    Demo p;
    return 0;
}