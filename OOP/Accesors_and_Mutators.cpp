#include <iostream>
using namespace std;

// Accessors: Are to Set the values of instance/data variables 
// Getters: Are to get the value of instance/data variable 
class Rectangle{
    private:
    int width;
    int height;

    public:

    int set_width(int a){
        if (a >= 0 ){
            width = a;
        }
        else{
            cout<<"It can't be negative";
        }
    }
    
    int set_height(int b){
        if (b >= 0 ){
            height = b;
        }
        else{
            cout<<"It can't be negative";
        }
    }


    int get_width(){
        return width;
    }
    int get_height(){
        return height;
    }

};

int main(){
    Rectangle d;
    d.set_width(10);
    d.set_height(20);
    cout<<"Value of Width is: "<<d.get_width()<<endl;
    cout<<"Value of Height is: "<<d.get_height()<<endl;
    return 0;
};
