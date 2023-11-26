#include <iostream>
using namespace std;

class rec{
    public:
        int length,breadth;
    
    int getLenght(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
};
int main()
{
    rec r;
    rec *Ptr;
    Ptr = &r;
    Ptr->length = 20;
    Ptr->breadth = 30;
    cout<<"Value of Length: "<<Ptr->getLenght()<<endl;
    cout<<"Value of Length: "<<Ptr->getBreadth()<<endl;

    return 0;
}