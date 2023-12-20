#include <iostream>
using namespace std;

class calculator{
    public:
    calculator(){
        cout<<"=============Calculator===========";
        cout<<"============ Version 2.2==========\n";
        cout<<"Use the Button \n\t add,subtract,multiply,divide";
    }
    int add(int a, int b){
        return a + b;
    }
    
    int subtract(int a , int b){
        return a - b;
    }

    int multiply(int a, int b){
        return a * b;
    }
    float divide(float a ,float b){
        if (b == 0 ){
            cout<<"Denominator Can't be Zero";
        }
        else{
        return a / b;
        }
    }
};

int main()
{   
    calculator cal;
    int ad = cal.add(2,2);
    int sub = cal.subtract(5,2);
    int mul = cal.multiply(4,4);
    float dic = cal.divide(5,2);


    cout<<"\nValue of add: "<<ad<<endl;
    cout<<"Value of Subtraction: "<<sub<<endl;
    cout<<"Value of Multiplication: "<<mul<<endl;
    cout<<"Value of Discription: "<<dic<<endl;
    return 0;
}