#include <iostream>
#include <string.h>
#include <stdio.h>
#include <istream>
using namespace std;    //Use the std namespace

int main()
{
    string line;
    string space = " ";
    getline(cin, line);  //insert istream into line object
    int loop = 1;
    while(loop == 1)
    {
        int firstspace;
        int lastspace;
        int count;
        string word_initial;
        string word_last;
        if (line.find(space) == -1)
        {
            cout << line << "\n";
        }
        else
        {
            firstspace = line.find(space);
            word_initial.assign(line, 0, firstspace);
            lastspace = line.find_last_of(space);
            count = line.length();
            word_last.assign(line, lastspace, count - 1);
            line.erase(lastspace, count);
            line.erase(0, firstspace + 1);
            cout << word_last << " " << line << " " << word_initial;;

        }
        loop++;
    }
}
