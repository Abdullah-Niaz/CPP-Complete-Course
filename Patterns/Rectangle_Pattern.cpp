#include <iostream>
using namespace std;
int main(){
    int cols,rows;
    cout<<"Enter the Cols "<<endl;
    cin>>cols;
    cout<<"Enter the Rows "<<endl;
    cin>>rows;
    for(int i=1 ; i<=cols ; ++i){
        for(int j=1 ; j<=rows ;++j){
            cout<<"*";
        }
        cout<<endl;
    }

}
