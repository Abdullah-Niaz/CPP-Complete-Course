#include <iostream>
#include <memory>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle(int a, int b)
    {
        length = a;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 + (length + breadth);
    }
};

int main()
{
    unique_ptr<Rectangle> ptr(new Rectangle(3,4));
    // unique_ptr<Rectangle> ptr(new Rectangle(3, 4));
    cout << ptr->area();
    cout << ptr->perimeter();

    return 0;
}
