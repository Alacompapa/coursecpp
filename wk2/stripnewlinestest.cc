#include <iostream>

using namespace std; 

int main(int argc, char *argv[])
{
    string line;

                                            // Continuously get a line as 
                                            // long as they are entered 
                                            // into stream
    for (size_t blanklinecounter = 0, 
            outputlinecounter = 0; getline(cin, line); )
    {
        if (line.empty())                    // Keep track of blanklines
            ++blanklinecounter;
        else
        {
            if (outputlinecounter > 0)      // Ouput blanklines inbetween
                while (blanklinecounter--)   // non-blanklines
                    cout << '\n';

            cout << line << '\n';           // Output intermediate lines
            ++outputlinecounter;
        }
    }
}
