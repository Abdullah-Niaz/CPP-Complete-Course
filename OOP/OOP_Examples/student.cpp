#include <iostream>
#include <string>
using namespace std;
class Student {
private:
     string name;
    int age;

public:
    void student(string a_name , int a_age){
        name = a_name;
        age  = a_age;
    }
     string get_name() {
        return name;
    }

    int get_age() {
        return age;
    }
};

int main() {
    Student mySt;
    mySt.student("Alice", 20);

     cout << "Name: " << mySt.get_name() <<  endl;
     cout << "Age: " << mySt.get_age() <<  endl;

    return 0;
}
