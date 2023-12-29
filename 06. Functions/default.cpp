#include <iostream>
using namespace std;
template <class T>

T Sub(T a = 0 , T b = 0 , T c = 0){
    return a + b + c;
}
// Position Arguments should be before the Default arguments
int add(int a , int b = 0 ,int c = 0){
    return a + b + c;
};
int main()
{   
    int a = 2;
    int t = Sub(2,2);
    cout<<"T: "<<t <<endl;
    int r = add(a,2,2);
    cout<<"Add Functions: "<<r;
    return 0;
};