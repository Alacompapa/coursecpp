#include "main.ih"

void countWords()
{
    size_t count = 0;
    string whitespaces = " \n\t";       //Define characters we will look for
    string line;
    while (getline(cin, line))
    {
                                        // Each new line will set the posWordEnd to 0 and -Start to 0
        size_t posWordEnd = 0;
        size_t posWordStart = 0;
                                        // While posWordEnd isn't end of line, and it isn't an empty line
        while ((posWordEnd != string::npos) and (not line.empty()))
        {
                                        // Start of the word is first
                                        // non-white character after last End
            posWordStart = line.find_first_not_of(whitespaces, posWordEnd);
                                        // End of the word is first non-char
                                        // after the start of the word
            posWordEnd = line.find_first_of(whitespaces, posWordStart);
            ++count;
        }
    }

    cout << count << " words in stream.\n";
}
