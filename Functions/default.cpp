#include <iostream>
using namespace std;

// Position Arguments should be before the Default arguments
int add(int a , int b = 0 ,int c =0){
    return a + b + c;
}

int main()
{
    int a = add(2,2,2);
    cout<<"Add Functions: "<<a;
    return 0;
};