#include "main.ih"

void writePersonInfo(Person array[], size_t size)
{
    for (size_t idx = 0; idx != size; ++idx)
    {
        array[idx].insert(std::cout);
    }
}
