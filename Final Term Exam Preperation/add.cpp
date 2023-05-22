// #include <iostream>
// using namespace std;

// int a_1(int n){
//     cout<<"Here Value of n is : "<<n<<endl;
//     return n * 2;
// }
// int b_2(int n){
//     cout<<"Here Value of n is : "<<n<<endl;
//     return n * 2;
// }
// int c_3(int n){
//     cout<<"Here Value of n is : "<<n<<endl;
//     return n * 2;
// }
// int main(){
//     int a = c_3(b_2(a_1(2)));
//     cout << a << endl;
// }





#include <iostream>
using namespace std;

int a_1(int n){
    cout<<"Here Value of n is : "<<n<<endl;
    return n * 2;
}
int b_2(int n){
    cout<<"Here Value of n is : "<<n<<endl;
    return n * 2;
}
int c_3(int n){
    cout<<"Here Value of n is : "<<n<<endl;
    return n * 2;
}
int main(){
    int a  = a_1(2);
    cout<<a<<endl;
    int b = b_2(a);
    cout<<b<<endl;
    int c = c_3(b);
    
    cout << a << endl;
}