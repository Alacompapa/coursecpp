#include "main.ih"

void readPersonInfo(Person array[], size_t size)
{
    for (size_t idx = 0; idx != size; ++idx)
    { // NOTE(BB): How to show a '?' just before reading next line?
      //        Maybe define a wrapper for std::cin?
        array[idx].extract(std::cin);
    }
}
