#include "main.ih"

int main(int argc, char **argv)
{
    // Display all characters (which should be in ordered positions due to how
    //  CharCount::count and CharCount::locate work)
    //  Display them using showChar()

    CharCount charCounter;

    size_t amountOfChars = charCounter.count(cin);
    cout << amountOfChars << '\n';
}

