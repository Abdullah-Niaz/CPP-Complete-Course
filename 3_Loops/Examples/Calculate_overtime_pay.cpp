#include <iostream>
using namespace std;
 
int main(){
    int hours, employ = 1, overtime_hours ;
    double overtime_pay;
    while (employ <=10)
    {
        cout<<"Enter the Hours of Employ:  "<<employ <<" : ";
        cin>>hours;
        if(hours>=40){
            int overtime_hours = hours - 40;
            overtime_pay = overtime_hours * 12.0;
        }
        else{
            overtime_pay = 0;
        }
        cout<<"Pay of Employ "<<employ << " is: "<<overtime_pay<<endl;
        employ++;
    }
    
    return 0;
}