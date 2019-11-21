#include "strings.ih"

void Strings::resize(size_t newSize)
{
    if (newSize < d_size)
    {
        for (string **end = d_str + d_capacity, **cutoff = d_str + newSize;
            end != cutoff; --end)
            delete *end;
        d_size = newSize;
    }
}
