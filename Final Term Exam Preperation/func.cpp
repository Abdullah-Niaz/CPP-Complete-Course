#include <iostream>
using namespace std;
// int is_even(int num) {
//     return num % 2 == 0;
// }

int check_array(int arr[]) {
    for (int i = 0; i <=5; i++) {
        if (arr[i] % 2 == 0 ) {
            cout << arr[i] << " is even" << endl;
        } else {
            cout << arr[i] << " is odd" <<endl;
        }
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    check_array(arr);
    return 0;
}