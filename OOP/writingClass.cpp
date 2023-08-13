
#include <iostream>
using namespace std;



// Delcare a Class of Recntangle
class Rectangle{
    public:
    // Aritbutes of Rctangle
    int length;
    int width;
    
    // Functions of Rectangle 
    int area(){
        return length * width;
    }
    int perameters(){
        return 2 * (length + width);
    }
};
int main(){

    // Create a objects of class 
    Rectangle r1,r2,r3;
    r1.length = 10;
    r1.width = 15;

    r2.length = 20;
    r2.width = 15;
    
    r3.length = 30;
    r3.width = 15;

    cout<<"Area of Rectangle r1 is: "<<r1.area()<<endl;
    cout<<"Perameters of Rectangle r1 is: "<<r1.perameters()<<endl;
    return 0;
};