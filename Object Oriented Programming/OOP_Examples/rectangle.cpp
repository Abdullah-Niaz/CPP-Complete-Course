#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;

public:

    void rectangle(double a_length, double a_widht){
        length = a_length;
        width = a_widht;
    }
    double calculate_area() {
        return length * width;
    }

    double calculate_perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle myRectangle;
    myRectangle.rectangle(5.0, 3.0);

     cout << "Area: " << myRectangle.calculate_area() <<  endl;
     cout << "Perimeter: " << myRectangle.calculate_perimeter() <<  endl;

    return 0;
}
