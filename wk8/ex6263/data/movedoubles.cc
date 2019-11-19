#include "data.ih"

void Data::moveDoubles(Data &&other)
{
    for (size_t idx = 0; idx != 10; ++idx)
        u_doubles[idx] = other.u_doubles[idx];
}
