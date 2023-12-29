#include <iostream>
#include <typeinfo>

using namespace std;

int main(){

    //? lambda Functions 

    //!  Simple Syntax 
    //Note [] = lambda introuducer 
    // () parameter list 
    
    //Todo  1---------------simple 
    // [](){
    //     cout<<"Hello into the world of lambda functions";
    // }();
    
    
    //Todo 2--------------- name 

    // auto info = [](){
    //     cout<<"hello World";
    // };
    // info();


    //Todo 3--------------- parameters
    // auto add = [](int a, int b){
    //     cout<<"a + b: "<< a + b;
    // };
    // add(2,3);

    //Todo 4--------------- Return Type
    // auto add = [](int a, int b, int c)->int{
    //     return a + b + c;
    // };
    // using type = decltype(add);
    // int a  = add(2,3,4);
    // cout<<typeid(type).name();

    return 0;
}