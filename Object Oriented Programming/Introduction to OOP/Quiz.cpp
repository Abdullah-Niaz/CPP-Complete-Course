#include <iostream>
using namespace std;

class Student
{
    private:
        int roll;
        string name;
        int phy, bio, math;

    public:


        Student(int roll, string name, int phy, int bio, int math){
            this->roll = roll;
            this->name = name;
            this->phy =  phy;
            this->bio = bio;
            this->math = math;
        }
        int total(){
            return phy + bio + math;
        }
        char grade(){
        float averagem = total()/3;
            if (averagem > 80 ){
                return 'A';
            }
            else{
                return 'B';
            }
        }
};
int main(){
    int r,p,b,m;
    string n;

    cout<<"Enter the Roll: ";
    cin>>r;

    cout<<endl;

    cout<<"Enter the Name: ";
    cin>>n;

    cout<<"Enter the Marks of PHY, Bio, Math: ";
    cin>>p>>b>>m;

    Student st(r,n,p,b,m);
    cout<<st.total()<<endl;
    cout<<st.grade();
    return 0;
}