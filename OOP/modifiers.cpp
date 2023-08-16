#include <iostream>
using namespace std;

class student
{
private:
    int a,b,c;
public:
    int d,e;

    void setData(int a1, int b1, int c1, int d1,int e1); // Declaration of fucntion for setting up data
    void getData(){
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
        cout<<"Value of c: "<<c<<endl;
        cout<<"Value of d: "<<d<<endl;
        cout<<"Value of e: "<<e<<endl;
    };
};

void student::setData(int a1, int b1, int c1, int d1,int e1){
    a = a1;
    b = b1;
    c = c1;
    d = d1;
    e = e1;
};
int main(){
    student st;
    
    st.d = 30;
    st.e = 30;
    st.setData(1,2,3,4,5);
    st.getData();
    
    // For dynamci allocation:

    cout<<"\n\nValues After Dynamic\n\n";
    student *p;

    p = &st;

    p->d = 124;
    p->e = 250;

    p->setData(11,22,33,44,55);
    p->getData();

    return 0;
};