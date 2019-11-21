#include <iostream>
#include <string>

using namespace std;  

int main()
{
    string line;
    while (getline(cin, line))
    {
                                                // look for start of first word
        size_t posFirstWord = line.find_first_not_of(' ');
        if (posFirstWord == string::npos)       // if no first word
        {
            cout << '\n';                       // output blank line
            continue;                           // get the next line
        }

        string whitespaces = " \n\t";           // look for end of first word
        size_t posFirstWordEnd = 
            line.find_first_of(whitespaces, posFirstWord) - 1;
        if (posFirstWordEnd == string::npos)    // if no other words
        {
            cout << line;                       // output line
            continue;                           // get next line 
        }
                                                // look for end of last word      
        size_t posLastWordEnd = line.find_last_not_of(whitespaces);
                                                // reverse find the start
                                                // of last word
        size_t posLastWord = line.rfind(' ', posLastWordEnd) + 1;

                                                // calc lengths of words
        size_t lenFirstWord = posFirstWordEnd - posFirstWord;
        size_t lenLastWord = posLastWordEnd - posLastWord;
                                                // copy the words
        string firstWord = line.substr(posFirstWord, lenFirstWord + 1);
        string lastWord = line.substr(posLastWord, lenLastWord + 1);

        line.erase(posLastWord, lenLastWord + 1);   // reverse the words
        line.insert(posLastWord, firstWord);        // in the sring

        line.erase(posFirstWord, lenFirstWord + 1);
        line.insert(posFirstWord, lastWord);

        cout << line << '\n';                       // output final line
    }
}
