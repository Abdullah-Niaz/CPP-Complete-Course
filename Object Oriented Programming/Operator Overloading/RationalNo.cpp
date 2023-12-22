#include <iostream>
using namespace std;

class Rational{
    private:
        int nu;
        int du;
    public:
        Rational(int nu = 0 , int du = 0 ){
            this->nu =  nu;
            this->du =  du;
        }

        friend Rational operator+(Rational r1,Rational r2);
        friend ostream & operator<<(ostream &o,Rational &c3);
};
Rational operator+(Rational r1, Rational r2)
{
    Rational temp;
    temp.nu = r1.nu * r2.du + r1.du * r2.nu;
    temp.du = r1.du * r2.du;
    return temp;
}

ostream &operator<<(ostream &o, Rational &c3) {
    o<<c3.nu <<"/"<<c3.du;
    return o;
}


int main()
{
    Rational c1(3,4),c2(4,3),c3;
    c3 = c1 + c2;
    cout<<c3;
    return 0;
}