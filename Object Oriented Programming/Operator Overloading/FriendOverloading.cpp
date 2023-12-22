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
    void display()
    {
        cout << real << "+i" << imag;
    }
    // Complex add(Complex x){
    // Complex operator+(Complex x)
    friend Complex operator+(Complex c1, Complex c2);
};

Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
};
int main()
{
    Complex c1(4, 5);
    Complex c2(3, 6);
    Complex c3;
    // c3  = c1.add(c2) ;
    c3 = c1 + c2;
    // cout << "Value of C3 is: " << c3.real << "+ i" << c3.imag;
    c3.display();
    return 0;
}