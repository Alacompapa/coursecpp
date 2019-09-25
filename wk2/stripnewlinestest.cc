#include <iostream>

using namespace std; // include the std namespace

int main(int argc, char *argv[])
{
    string line;

    // Continuously get a line as long as they are entered into stream
    for(size_t blanklinecounter = 0,
         outputlinecounter = 0;getline(cin, line);)
    {
        if(line.empty())
            blanklinecounter++;
        else
        {
            if (outputlinecounter > 0)
                for (size_t counter2 = 0; counter2 < blanklinecounter;counter2++)
                    cout << '\n';

            cout << line << '\n';
            outputlinecounter++;
            blanklinecounter = 0;
        }
    }
}
