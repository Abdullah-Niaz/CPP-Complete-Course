// C++ code for hollow rectangle
#include <bits/stdc++.h>
using namespace std;

// Function to print hollow rectangle

// Driver Code
int main()
{
	// int n = 6, m = 20;
    int row,col;
    cout<<"Enter the Row and columns: ";
    cin>>row>>col;
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			if (i == 1 || i == row ||
				j == 1 || j == col)		
				cout << "*";			
			else
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}

// This code is contributed
// by rathbhupendra











// #include <iostream>
// using namespace std;
// int main()
// {

//     int row, col;
//     cout << "Enter the Row& columns: ";
//     cin >> row >> col;
//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= col; j++)
//         {
//             if (i == 1 || i == row || j == 1 || j == col)
//             {
//                 cout << " * ";
//             }
//             // else if ()
//             // {
//             //     cout << " * ";
//             // }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
// }
