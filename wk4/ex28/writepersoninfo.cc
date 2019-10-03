#include "main.ih"

void writePersonInfo.cc(Person array[], size_t size)
{
    for (auto &element: array)
    {
        cout << element.name() << '\n'
            << element.address() << '\n'
            << element.phone() << '\n'
            << element.mass(); 
    }
}
