#include <iostream>
using namespace std;

int main() {
  // Initialize variables
  int num, pos_count = 0, neg_count = 0, zero_count = 0;
  char choice = 'y';

  // Ask the user to enter numbers until they choose to stop
  while (choice == 'y' || choice == 'Y') {
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is positive, negative, or zero and increment the corresponding count
    if (num > 0) {
      pos_count++;
    } else if (num < 0) {
      neg_count++;
    } else {
      zero_count++;
    }

    // Ask the user if they want to enter another number
    cout << "Do you want to enter another number? (y/n): ";
    cin >> choice;
  }

  // Print the count of positive, negative, and zero numbers entered
  cout << "Total positive numbers entered: " << pos_count << endl;
  cout << "Total negative numbers entered: " << neg_count << endl;
  cout << "Total zeros entered: " << zero_count << endl;

  return 0;
}
