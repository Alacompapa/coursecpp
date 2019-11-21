#include "main.ih"

int main(int argc, char **argv)
{
    CharCount charCounter;

    for (size_t idx = 0, size_t charNumber = charCounter.count(cin); idx != charNumber; ++idx)
        showChar(charCounter.info().ptr[idx].ch);

    cout << "Capacity" << '\n' << charCounter.capacity() << ", raw Capacity:" << charCounter.rawCapacity() << '\n';
}
