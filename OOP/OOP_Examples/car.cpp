#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;

public:

    void car(string a_make, string a_model, int a_year){
        make = a_make;
        model = a_model;
        year = a_year;
    }
    string get_make() {
        return make;
    }

     string get_model() {
        return model;
    }

    int get_year() {
        return year;
    }
};

int main() {
    Car myCar;
    myCar.car("Toyota", "Camry", 2022);

     cout << "Make: " << myCar.get_make() <<  endl;
     cout << "Model: " << myCar.get_model() <<  endl;
     cout << "Year: " << myCar.get_year() <<  endl;

    return 0;
}
