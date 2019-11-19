#include "data.ih"

void Data::copyDoubles(Data const &other)
{
    for (size_t idx = 0; idx != 10; ++idx)
        u_doubles[idx] = other.u_doubles[idx];
}
