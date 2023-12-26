#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    void rectangle(int l = 0, int b = 0)
    {
        setLength(l);
        setWidth(b);
    }
    int setLength(int l)
    {
        if (l > 0)
        {
            this->length = l;
        }
        else
        {
            this->length = 0;
        }
    }

    int setWidth(int b)
    {
        if (b > 0)
        {
            this->width = b;
        }
        else
        {
            this->width = 0;
        }
    }

    int getLength()
    {
        return length;
    }
    int getwidth()
    {
        return width;
    }

    double area()
    {
        return (length * width);
    }

    double perimeter()
    {
        return 2 * (length + width);
    }
};

class Cubiod : public Rectangle
{
private:
    int height;

public:
    Cubiod(int h, int l, int b){
        setHeight(h);
        setLength(l);
        setWidth(b);
    }

    int setHeight(int h){
        this->height = h;
    }

    int getHeight(){
        return this->height;
    }

    int volume(){
        return getLength() * getwidth() * height;
    }
public:
};
int main(){
    Cubiod c(10,20,30);
    cout<<"Area is: "<<c.area()<<endl;
    cout<<"Perimeter is: "<<c.perimeter()<<endl;
    cout<<"Volume is: "<<c.volume()<<endl;
    return 0;
}
