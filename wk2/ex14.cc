#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
                                                // To show all combinations of
                                                // args we use binary counting.
    size_t numbits = argc - 1;                  // First arg is program name
    size_t numcomb = 1 << numbits;              // Same as 2^(numbits)

                                                // Each different combination
                                                // has a unique countnumber
    for(size_t count = 0; count < numcomb; ++count) 
    {
        string output;

                                                // Loop over every 'place' in the binary number, with each iteration we
                                                // bitshift countcpy to the right thereby getting a new least significant bit (LSB) 
        for(size_t pos = 0, countcpy = count; pos <= numbits; ++pos, countcpy >>= 1)
        {
            if(countcpy % 2 == 1)               // Check the value of the LSB 
            {                                   // if 1 then add the arg
                output += argv[pos + 1];        // to the output
                output += " ";
            } 
        }

        cout << count << ": " << output << '\n'; // Show a combination
    }
}
