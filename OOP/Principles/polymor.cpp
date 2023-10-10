#include <iostream>
using namespace std;

class person {
public:
    void show() {
        cout << "in base class" << endl;
    }
};

class person2 : public person { // Use 'public' for inheritance
public:
    int b = 20;
    // void show() {
    //     cout << "In derived class" << endl;
    // }
};

int main() {
    person2 p;
    p.show(); // Calls the show method of the derived class
    return 0;
}
