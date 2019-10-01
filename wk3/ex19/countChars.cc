#include "main.ih"

void countChars()
{
    size_t count = 0;
    string line;
    while (getline(cin, line))
        for (size_t idx = 0; idx != line.length(); ++idx)
            if (isalnum(line[idx]))             // all alphanumeric chars are 
               ++count;                         // counted

    cout << count << " characters in stream.\n";
}
