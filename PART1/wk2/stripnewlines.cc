#include <iostream>

using namespace std; // include the std namespace

int main(int argc, char *argv[])
{
  string output;
  string line;
  size_t blanklinecounter = 0;
  bool bof = true; // true if we are at the beginning of file 

  // Continuously get a line as long as they are entered into stream
  while(getline(cin, line))
  {
    // We don't want the blanklines at beginning of stream
    if(bof)
    {
      // But when we encounter first non-blank line we want to include that one
      // also note this means we are not at beginning of stream anymore
      if(not line.empty())
      {
        bof = false;
        output += line + '\n';
      }
    } else 
      // We want to include all lines in the middle of stream but exclude the
      // last blank lines
    {
      if(line.empty())
      {
        // Keep track of the number of blank lines seen
        ++blanklinecounter;
      } else 
      {
        // Reset the counter if we encounter a non-blank line
        blanklinecounter = 0;
      }
      // Include all the lines in output, as we don't know if we are at EOF
      output += line + '\n';
    }
  }

  // Here we are at EOF and hence can trim the trailing blanklines from the output
  string trimmedoutput = output.substr(0, output.length() - blanklinecounter);
  cout << trimmedoutput;
}
