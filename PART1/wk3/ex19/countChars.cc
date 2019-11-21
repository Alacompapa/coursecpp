#include "main.ih"

void countChars()
{
    size_t count = 0;
    string line;
    while (getline(cin, line))
        count += line.length();

    cout << count << " characters in stream.\n";
}
