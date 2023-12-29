#include <iostream>
using namespace std;



class Rectangle{
    public:
        int length;
        int breadth;
    
    public:
        Rectangle(){
            length,breadth = 1;
        }
        Rectangle(int l, int b){
            setlength(l);
            setbreadth(b);
        }
        void setlength(int l){
            if(l > 0 ){
                breadth = l;
            }
            else{
                breadth = 1;
            }
        }
        void setbreadth(int b){
            if ( b > 0 ){
                length = b;
            }
            else{
                breadth = 1;
            }
        }


        int Area(){
            return length * breadth;
        }
        int Perimeter();
        ~Rectangle();
};




int Rectangle::Perimeter(){
    return 2 * (length +  breadth);
}

Rectangle::~Rectangle(){
    cout<<"Rectangle Destroyed";
}


int main()
{
    Rectangle r(3,4);
    cout<<"Area is : "<<r.Area()<<endl;
    cout<<"Perimeter is: "<<r.Perimeter()<<endl;
    return 0;
}