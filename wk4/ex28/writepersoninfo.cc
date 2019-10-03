#include "main.ih"

void writePersonInfo(Person array[], size_t size)
{
    for (size_t idx = 0; idx != size; ++idx)
    {
        cout << array[idx].name() << '\n'
             << array[idx].address() << '\n'
             << array[idx].phone() << '\n'
             << array[idx].mass(); 
    }
}
