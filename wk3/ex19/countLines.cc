#include "main.ih"

void countLines()
{
    size_t count = 0;
    string line;
    while (getline(cin, line))
        ++count;

    cout << count << " lines in stream.\n";
}
