#include "strings.ih"

void Strings::swap(Strings &other)      // Swap function for move assignment
{
    swap(*d_str, *other.d_str);
    swap(d_size, other.d_size);
}
