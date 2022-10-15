#include <iostream>
using namespace std;

int main(){

    int no1, no2;
    char button;
    cout<<"Enter two Nomber ";
    cin>>no1>>no2;
    cout<<"Enter Action +, - , / *, ** " ;
    cin>>button;
    switch (button)
    {
    case '+':
        cout<<"Additon of Given Numbers "<<no1+no2;
        break;
    case '-':cout<<"Substraction of Given Numbers "<<no1-no2;
        break;
    case '*':cout<<"Multiplication of Given Numbers "<<no1*no2;
        break;
    case '/':cout<<"Division of Given Numbers "<<no1/no2;
        break;
    default:
        break;
    }
    return 0;
}