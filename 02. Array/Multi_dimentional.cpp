#include <iostream>
using namespace std;

int main(){
    int a[2][3]= {{1,2,3},
                  {4,5,6}};
    // cout<<"Elements of Row 1"<<endl;
    // cout<<a[0][0]<<endl;
    // cout<<a[0][1]<<endl;
    // cout<<a[0][2]<<endl;
    // cout<<"Elements of Row 2"<<endl;
    // cout<<a[1][0]<<endl;
    // cout<<a[1][1]<<endl;
    // cout<<a[1][2]<<endl;
    
    // Row 
    cout<<"Enter the Elements of A[2][3] or 6 Elements: ";
    for (int i = 0; i < 2; i++)
    {
        // Columns
        for (int j = 0; j <3; j++)
        {
            cin>>a[i][j];
        }
    }

    // Display the Array Elements   
    for (int i = 0; i < 2; i++)
    {
        // Columns
        for (int j = 0; j <3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}