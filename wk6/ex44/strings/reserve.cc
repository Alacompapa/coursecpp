#include "strings.ih"

void Strings::reserve(size_t newCap)
{
    if (newCap <= d_capacity)               // do we need to reserve more?
        return;
    
    string **tmp = rawPointers(newCap);     // get more raw memory
    for (string **begin = d_str, **end = d_str + d_size; 
            begin != end; ++begin) 
        *tmp = *begin;                      // copy existing pointers

    d_str = tmp; 
}
