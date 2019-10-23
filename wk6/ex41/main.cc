#include "main.ih"

int main(int argc, char **argv)
{
    // Display all characters (which should be in ordered positions due to how
    //  CharCount::count and CharCount::locate work)
    //  Display them using showChar()

    CharCount charCounter;

    for (size_t idx = 0; idx != charCounter.count(cin); ++idx)
        showChar(charCounter.info().ptr[idx].ch);

    cout << charCounter.capacity() << '\n';
    cout << charCounter.rawCapacity() << '\n';

}
