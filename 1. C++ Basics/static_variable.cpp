#include <iostream>
using namespace std;

int add(int a, int b){
    static int c = 0 ;
    c = c + 1;
    return a + b + c;
}
int main(){
    cout<<"First Time: "<<add(2,3)<<endl;
    cout<<"Second Time: "<<add(3,4)<<endl;
    return 0;
};