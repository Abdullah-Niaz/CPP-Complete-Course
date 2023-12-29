#include <iostream>
using namespace std;

int main() {
  // Initialize variables
  int decimal_num, octal_num = 0, place_value = 1;

  // Ask the user to enter a decimal number
  cout << "Enter a decimal number: ";
  cin >> decimal_num;

  // Convert the decimal number to octal
  while (decimal_num > 0) {
    octal_num += (decimal_num % 8) * place_value;
    decimal_num /= 8;
    place_value *= 10;
  }

  // Print the octal equivalent of the entered number
  cout << "The octal equivalent is: " << octal_num << endl;

  return 0;
}
