#include <iostream>
using namespace std;

int main() {
    char x ='A'; // character we can store only one char in char type.
    char y[] ="Hello World" ;// in order to store the strings, we need to declare the array in char type
    // in order to store the string we use double quotes
    // Details ['H','e','l','l','o','w','o','r','l','d','\o' > this is a string terminator] 
    // Details ['H','e','l','l','o','w','o','r','l','d','\o' > this is a string terminator] 
    cout<<x<<endl;
    cout<<y;
    return 0;
}
 