#include <iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;

    public:
        Rectangle(){
            length = 0;
            breadth = 0;
        }
        Rectangle(int l, int b){
            // length = l;
            // breadth = b;

            setlength(l);
            setbreadth(b);
        }
        void setlength(int l){
            if( l > 0 ){
                length = l;
            }
            else{
                length = 0;
            }
        }
        void setbreadth(int b){
            if( b > 0 ){
                breadth = b;
            }
            else{
                breadth = 0;
            }
        }

        int Area(){
            return length + breadth;
        }

        int Perimeter(){
            return (2 + (length + breadth));
        }
};

int main(){
    Rectangle r(3,4);
    int a = r.Area();
    cout<<a;
    return 0;
}