#include <iostream>
using namespace std;
template <class T, class R>

// T add(T x,T y){
//     return x + y;
// }

R maxi(T x, R y){
    return x>y?x:y;
}

int main(){
    // cout<<add(2,2);
    cout<<maxi(2,3.4);
    return 0;
}