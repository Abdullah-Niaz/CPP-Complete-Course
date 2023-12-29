#include <iostream>
using namespace std;
class Complex{
    public:
        int real;
        int imag;

    public:
        Complex(int real = 0 , int imag = 0){
            this->real = real;
            this->imag = imag;
        }

        // Complex add(Complex x){
        Complex operator+(Complex x){
            Complex temp;
            temp.real = real + x.real;
            temp.imag  = imag + x.imag;
            return temp;
        }
};
int main(){
    Complex c1(4,5);
    Complex c2(3,6);
    Complex c3;
    // c3  = c1.add(c2) ;
    c3  = c1+c2 ;
    cout<<"Value of C3 is: "<<c3.real <<"+ i"<<c3.imag;
    return 0;
}