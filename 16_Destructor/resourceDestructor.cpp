#include <iostream>
using namespace std;

class Demo{
    public:
        int *p;

        Demo(){
            p = new int[5];
            cout<<"Enter the Array Values: ";
            for (int i = 0; i < 5; i++)
            {
                cin>>p[i];
            }
            for (int i = 0; i < 5; i++)
            {
                cout<<p[i]<<endl;
            }
        }

        ~Demo(){
            delete p;
            cout<<"Array Values Has been de-allocated";
        }
};

int main(){
    Demo *d = new Demo();
    delete d;
    return 0;
}