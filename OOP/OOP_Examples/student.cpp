#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string _name;
    int _age;

public:
    void student(string a_name , int a_age){
        _name = a_name;
        _age  = a_age;
    }
     string get_name() {
        return _name;
    }

    int get_age() {
        return _age;
    }
};

int main() {
    Student mySt;
    mySt.student("Alice", 20);

     cout << "Name: " << mySt.get_name() <<  endl;
     cout << "Age: " << mySt.get_age() <<  endl;

    return 0;
}
