#include "strings.ih"

std::string **Strings::rawPointers(size_t numpointers)
{
    return static_cast<string**>(operator new(numpointers*sizeof(string)));
}
