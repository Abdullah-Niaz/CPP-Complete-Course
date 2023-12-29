#include <iostream>
using namespace std;


// recursive: A function that calls itself until the certain condition met.
int recursive(int n){
    if (n == 1){
        return 1;
    }
    else{
        return n * recursive(n - 1 );
    }
}
int main(){
    cout<<"Recusive Functions: "<<recursive(4);
    return 0;
};