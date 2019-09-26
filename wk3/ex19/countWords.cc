#include "main.ih"

void countWords()
{
    size_t count = 0;
    string whitespaces = " \n\t";
    string line;
    while (getline(cin, line))
    {
        size_t word = line.find_first_not_of(whitespaces, 0);
        size_t wordEnd = line.find_first_of(whitespaces, word);
        
        if (word == string::npos and wordEnd == string::npos)
            continue;

        while (wordEnd != string::npos)
        {
            word = line.find_first_not_of(whitespaces, wordEnd);
            wordEnd = line.find_first_of(whitespaces, word);

            ++count;
        }
    }
    
    cout << count << " words in stream.\n";
}
