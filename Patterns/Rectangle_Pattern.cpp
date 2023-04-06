#include <iostream>
using namespace std;
int main(){

    int row,column;
    cout<<"Enter the Row & Columns: ";
    cin>>row>>column;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    
}
