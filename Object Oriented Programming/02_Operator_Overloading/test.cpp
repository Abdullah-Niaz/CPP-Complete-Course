#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int real = 0, int imag = 0)
    {
        this->real = real;
        this->imag = imag;
    }

    // void display(){
    //     cout<<real << "+i"<<imag;
    // }
    // Complex add(Complex x){
    //         Complex temp;
    //         temp.real = real + x.real;
    //         temp.imag = imag + x.imag;
    //         return temp;
    // }

    friend Complex operator+(Complex c1, Complex c2);
    friend ostream &operator<<(ostream &o, Complex &c1);
};
Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

ostream &operator<<(ostream &o, Complex &c3)
{
    o << c3.real << "+i" << c3.imag;
}

int main()
{
    Complex Abdullah(2, 3), Ali(4, 5), omer;
    omer = Abdullah + Ali;
    cout << omer;

    return 0;
}