#include "strings.ih"

void reserve(size_t new_cap)
{
    // if new_cap > d_capacity 
    // then
    // reserve more in string **tmp
    // copy pointers from d_str to tmp
    // d_str = tmp
    
    string **tmp = rawPointers(new_cap);
    for (string **begin = d_str, **end = d_str + d_size; 
            begin != end, ++begin)
        *tmp = *begin;

    d_str = tmp; 
}
