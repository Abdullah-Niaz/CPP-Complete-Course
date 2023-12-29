#include<iostream>
using namespace std;
//write a Max() function template for 2 numbers
// Templating of fucntions 
// template<class T>
// T Max(T a,T b)
// {
//     if(a>b)
//         return a;
//     else
//         return b;
// }

int add(int a = 0 , int b = 0 , int c = 0 ){
    return a + b + c;
}
int main()
{
    int x = 10 , y = 15 , z = 20;
    int result1 = add();
    int result2 = add(2,5);
    int result3 = add(2,7,8);
    int result4 = add(2,7,0);
    cout<<result1<<endl<<result2<<endl<<result3<<endl<<result4<<endl;
    
    // Templating of fucntions 
    // cout<<Max(10,5)<<endl;
    // cout<<Max(12.5f,17.3f);
    return 0;
}
