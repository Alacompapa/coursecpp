#include "main.ih"

int main(int argc, char **argv)
{
    CharCount charCounter;

    for (size_t idx = 0; idx != charCounter.count(cin); ++idx)
        showChar(charCounter.info().ptr[idx].ch);

    cout << charCounter.capacity() << '\n';
    cout << charCounter.rawCapacity() << '\n';
}
