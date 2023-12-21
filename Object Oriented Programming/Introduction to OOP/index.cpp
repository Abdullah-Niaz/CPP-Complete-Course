// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

//! modifiers in c++
    //Todo Public: which can be accesed anywhere 
    //Todo Private: which can be accessed only in that class
    //Todo Protected: Both Public & Private

class Car
{
public:
    string name;
    string model;
    string color;
    int price;

    // Methods 
    int intro(){
        cout<<"Name of Car is: "<<name<<endl;
        cout<<"Model of Car is: "<<model<<endl;
        cout<<"Color of Car is: "<<color<<endl;
        cout<<"Price of Car is: "<<price<<endl;
    }
};

int main()
{
    Car c;
    c.name = "BMW";
    c.model = "2020";
    c.color = "black";
    c.price = 202020;


    // invoke your function/method 

    c.intro();
}