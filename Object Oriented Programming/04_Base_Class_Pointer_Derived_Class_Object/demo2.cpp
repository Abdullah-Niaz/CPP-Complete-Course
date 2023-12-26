#include <iostream>
using namespace std;

class BaseCar{
    public:
        void start(){
            cout<<"Starting Car";
        }
};

class AdvanceCar:public BaseCar{
    public:
        void playMusic(){
            cout<<"Playing Music";
        }
};

int main(){
    // BaseCar *b;
    // b = new AdvanceCar();

    AdvanceCar *A;
    A  = new AdvanceCar();
    A->start();
    A->playMusic();

    return 0;
}