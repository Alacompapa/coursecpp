#include "main.ih"

void readPersonInfo(Person array[], size_t size)
{
    for (size_t idx = 0; idx != size; ++idx)
    {
        cout << "? ";
        array[idx].extract(std::cin);
    }
}
