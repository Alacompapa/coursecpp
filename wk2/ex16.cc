#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{                                               // For digits above 9
  string digits = "0123456789abcdefghijklmnopqrstuvwxyz";

  size_t radix = stoi(argv[1]);                 // Get arguments as numbers
  size_t input = stoi(argv[2]);                 

  string baseRepr;                              // To store output
                                                // Computation of representation
  for (size_t value = input; value != 0; value /= radix)
      baseRepr.insert(0, digits.substr(value % radix, 1));
                                                 
  if (baseRepr.empty())                         // If the number was zero
      baseRepr = "0";

  cout << input << ", displayed using radix " << radix
                                         << " is: " << baseRepr << '\n';
}
