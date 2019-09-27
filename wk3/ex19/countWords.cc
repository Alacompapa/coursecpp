#include "main.ih"

void countWords()
{
    size_t count = 0;
    string whitespaces = " \n\t";
    string line;
    while (getline(cin, line))
    {
        size_t posWordEnd = 0;
        size_t posWordStart = 0;
        while (posWordEnd != string::npos)
        {
            posWordStart = line.find_first_not_of(whitespaces, posWordEnd);
            posWordEnd = line.find_first_of(whitespaces, posWordStart);
            count++;
        }
    }

    cout << count << " words in stream.\n";
}
