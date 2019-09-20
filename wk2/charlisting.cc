#include <iostream>

using namespace std; // Use the std namespace

int main(int argc, char *argv[])
{
  // We need a string to store the letters we find
  string letterset;

  // A char has size of one byte which can be used as a number or as a character
  for (char asciicode = 1; asciicode < 127; asciicode++) 
  {
    // Check if the byte is a letter in the ASCII encoding and add it to the set
    if (isalpha(asciicode)){
      letterset += asciicode;
    }
  }
   
  // Output the set to the cout stream
  cout << letterset << endl;

  return 0;
}
