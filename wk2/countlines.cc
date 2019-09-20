#include <iostream>

using namespace std; // Use the std namespace

int main(int argc, char *argv[])
{
  int count = 0;
  string line;

  // Check if any argument is given
  if(argc > 1)
  {
    // Check if argument "ok" is given
    string argument = argv[1];
    if(argument == "ok")
    {
      // Count the number of lines
      while(getline(cin, line))
      {
        ++count;
      }
      cout << count << endl;

      return 0;
    }
  }

  // No argument given, or argument is not "ok"
  // Here we count the lines in the wrong way 
  // (and getting a result 1 greater than expected)
  while(true){
      ++count;
    if (not getline(cin,line)){
      break;
    }
  }
  cout << count << endl;

  return 0;
}
