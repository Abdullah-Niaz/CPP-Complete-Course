#include <iostream>
#include <cmath>
using namespace std;
int main() {
  // Initialize variables
  double base, exponent, result;
  // Ask the user to input the base and exponent
  cout << "Enter the base number: ";
  cin >> base;
  cout << "Enter the exponent: ";
  cin >> exponent;
  // Calculate the result using the pow() function from the cmath library
  result = pow(base, exponent);
  // Print the result
  cout << base << " raised to the power of " << exponent << " is " << result << endl;
  return 0;
}
