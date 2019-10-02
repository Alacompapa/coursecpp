#include "main.ih"

void countWords()
{
    size_t count = 0;

    string word;
    while (cin >> word)
        ++count;

    cout << count << " words in stream.\n";
}
