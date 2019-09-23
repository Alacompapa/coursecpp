/* The idea behind this solution has to do with binary counting.
 * If we represent each argument as a bit, treating 0 as not showing
 *   the argument in the list and 1 as showing it. We can glue those
 *   bits together to get a binary number. If we then count up from 0
 *   up to the value where all bits are 1, we have gone through all 
 *   possible combinations.
 * if    then    else      : output
 * 0       0       0       : 
 * 1       0       0       : if
 * 0       1       0       : then
 * 1       1       0       : if then
 * 0       0       1       : else
 * 1       0       1       : if else
 * 0       1       1       : then else
 * 1       1       1       : if then else 
 */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  // To show all combinations of arguments we can use binary counting.
  size_t numbits = argc - 1; // As the first argument is the program name we have 1 less argument to show
  size_t numcomb = 1 << numbits; // This is the same as 2^(numbits)
  
  for(size_t count = 0; count < numcomb; ++count) // Each different combination has a unique countnumber
  {
    string output;

    // We now loop over every 'place' in the binary number, with each iteration we
    // bitshift countcpy to the right thereby getting a new least significant bit (LSB) 
    for(size_t place = 1, countcpy = count; place <= numbits; ++place, countcpy >>= 1)
    {
      if(countcpy % 2 == 1) // Check the value of the LSB, if it is 1 then add the arg to the output
      {
        output += argv[place];
        output += " ";
      } 
    }

    cout << count << ": " << output << '\n'; // Show a combination
  }

}
