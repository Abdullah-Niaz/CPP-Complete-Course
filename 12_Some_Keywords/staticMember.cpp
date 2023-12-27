#include <iostream>
using namespace std;

class Test{
    private:
        int a,b;
    public:
        static int count;

        Test(){
            a = 10;
            b = 20;
            count++;
        }
};

int Test::count = 0;

int main(){
    Test t1;
    Test t2;
    Test t3;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    cout<<t3.count<<endl;
    return 0;
}