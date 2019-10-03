#include "main.ih"

void readPersonInfo(Person array[], size_t size)
{
    for (size_t idx = 0; idx != size; ++idx)
    {
        string input;
        do
        {
            cout << "? ";                       // Prompt
                               // How to get the data from stream
        } while (cin >> input);              // wrap in for loop?
    }
}
