#include "strings.ih"

void Strings::swap(Strings &other)      // Swap function for move assignment
{
    string *tmp = d_str;
    d_str = other.d_str;
    other.d_str = tmp;

    size_t size = d_size;
    d_size = other.d_size;
    other.d_size = size;
}
