#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    if (argc > 3)
    {
        cout << "Require two numerical unsigned inputs" << '\n';
        return 1;
    }
     
    istringstream istr(argv[1]);
    size_t no1 = 0;
    istr >> no1;
  
    cout << "extracted first number: " << no1 << '\n';

    istr.str(argv[2]);
    size_t no2 = 0;
    istr >> no2;
  
    cout << "extracted second number: " << no2 << '\n';
}
/*
What is wrong with the version we got:
15:     initialize istr with argv[1] as contents
16,17:  extract contents from stream to no1
        this moves "the cursor" one place to the right
21:     reinitialize istr with argv[2] as contents
        note the cursor is still at position 1
22,22:  extract contents from istr (after position 1) 

So what we should do to fix this is at line 21
    istr.str(argv[2]);
    istr.seekg(0);
    size_t no2 = 0;
    istr >> no2;
*/
