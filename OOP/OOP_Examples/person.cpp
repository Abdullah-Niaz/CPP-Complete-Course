#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string __name;
    int __age;

public:
    // Person(const  string& person_name, int person_age) : name(person_name), age(person_age) {}
    void Personal(string name, int age)
    {
        __name = name;
        __age = age;
    }

    string get_name()
    {
        return __name;
    }

    int get_age()
    {
        return __age;
    }
};

int main()
{
    Person Ali;
    Ali.Personal("Ali", 20);

    cout<< "Name: " << Ali.get_name() << endl;
    cout << "Age: " << Ali.get_age() << endl;

    return 0;
}
