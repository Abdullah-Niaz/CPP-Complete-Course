#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter your rows: ";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i; j++)
        {
            cout << " & ";
        }
        for (int j = 1; j <=row; j++)
        {
            cout<<" * ";
        }
        cout << endl;
        
    }

} // namespace std;

// #include <iostream>
// using namespace std;
// int main(){

//     int row;
//     cout<<"Enter the Row: ";
//     cin>>row;
//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= row-i; j++){
//             cout<<" - ";
//         }
//         for (int j = 1; j <= row; j++)
//         {
//             cout<<" * ";
//         }

//         cout<<endl;
//     }

// }
