#include <iostream>
#include <math.h>
using namespace std;
int main(){
    // Qudratic Eqaution
    int a,b,c;
    cout<<"Enter your Values Respectively a, b ,c "<<endl;
    cin>> a >> b >>c ;
    int result1 =((-b+sqrt(pow(b,2)-(4*a*c)))/(2*a));
    int result2 =((-b-sqrt(pow(b,2)-(4*a*c)))/(2*a));
    cout<<"Positive Values : "<<result1<<endl;
    cout<<"Negative Values : "<<result2<<endl;
    return 0;
}