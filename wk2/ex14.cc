/* The idea behind this solution has to do with binary counting.
 * If we represent each argument as a bit, treating 0 as not showing
 *   the argument in the list and 1 as showing it. We can glue those
 *   bits together to get a binary number. If we then count up from 0
 *   up to the value where all bits are 1, we have gone through all 
 *   possible combinations.
 */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
  // The number of combinations is 2^(argc-1), here calculated by using bitshift
  cout << "Calc numcomb" << endl;
  int numcomb = 1 << (argc - 1);
  cout << numcomb << endl;

  // We now count up from 0 to the total number of combinations 
  for(int count = 0; count < numcomb; ++count)
  {
    string output;

    // We are now calculating which bits are on and which are off.
    // Using this we know which args to include. 
    for(size_t bitscounter = 0, bits = count; bits > 0; ++bitscounter, bits >> 1)
    {
      if(bits % 2 == 1)
      {
        // Add arg to output
        output += argv[bitscounter]; 
        output += ' ';
        cout << "added: " << output << endl;
      } 
    }

    // Output the line
    cout << count << ": " << output << '\n';
  }
}
