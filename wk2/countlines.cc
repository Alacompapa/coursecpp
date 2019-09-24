#include <iostream>

using namespace std; // Use the std namespace

int main(int argc, char *argv[])
{
    string argument = (argc > 1 ? argv[1]:"");
    // Check if any argument is given, and if that argument is ok
    if (argument == "ok")
    {
        // Count the number of lines
        int count = 0;
        string line;

        while (getline(cin, line))
            ++count;

        cout << count << '\n';
    }

    else
    {
        // No argument given, or argument is not "ok"
        // Here we count the lines in the wrong way
        // (and getting a result 1 greater than expected)
        int count = 0;
        string line;

        while (true)
        {
            ++count;
            if (not getline(cin,line))
                break;
        }

        cout << count << '\n';
    }
}
