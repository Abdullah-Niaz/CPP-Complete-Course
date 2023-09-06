#include <iostream>
using namespace std;

struct students
{
    string name[5]={"Abdullah","Omer","Hamza","Ali","Talha"};
    int roll[5] = {1,2,3,4,5};
    int marks[5][5] = {{989, 947, 977 , 923, 917},
                    {989, 947, 977 , 923, 917},
                    {989, 947, 977 , 923, 917},
                    {989, 947, 977 , 923, 917},
                    {989, 947, 977 , 923, 917}};
    string sub[1][5] = {
        {"Physic","Math","Chemistry","Statistics","CN"},
    };

};


union price
{
    int dollar;
    char pound;
    float euro;
};


int main(){
    students st;
    int roll;
    cout<<"Enter the Roll No to Search the Result: ";
    cin>>roll;
    for (int i = 0; i <4; i++)
    {  
        if (roll == st.roll[i])
        {
            cout<<"==================\n\n";
            cout<<"Name of Student: "<<st.name[i]<<endl;
            cout<<"Roll No: "<<st.roll[i]<<endl;


            cout<<"Marks: ";
            for (int j = 0; j <= 4; j++)
            {
            cout<<st.marks[i][j]<<" : ";
            }  

            cout<<"\nSubjects: ";
            for (int j = 0; j <= 4; j++)
            {
                for (int k = 0; k <=4; k++)
                {
                    /* code */
                    cout<<st.sub[j][k]<<" : ";
                }
            }
        
            cout<<"\n\n==================\n\n";
        }
        
        
    }

    

    
    return 0;
}