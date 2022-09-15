#include <iostream>
#include <string>
using namespace std;

int main()
{
    string test;
    test = "I am Q the omnipot3nt";
    char ch = test[5]; // ch is 'Q'
    test[18] = 'e';    // we correct misspelling of omnipotent
    cout << test << endl;
    cout << "ch = " << ch << endl;
    return 0;
}