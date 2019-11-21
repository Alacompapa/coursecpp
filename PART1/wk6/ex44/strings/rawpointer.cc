#include "strings.ih"

std::string **Strings::rawPointers(size_t numPointers)
{
    return static_cast<string **>(operator new(numPointers * sizeof(string)));
}
