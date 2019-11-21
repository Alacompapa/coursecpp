#include "main.ih"

void usage(char const *program)
{
    cout << 
    "Usage: " << program << R"R( inputfile outputfile [-b]
Where:
  inputfile  - filename of input
  outputfile - filename of output
  -b         - option to write binary format to outputfile

Outputfile is overwritten if present, otherwise it is created.)R" << '\n';
}
