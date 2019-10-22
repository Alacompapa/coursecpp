#include "strings.ih"
#include <iostream>

string **Strings::enlarge()
{
    d_capacity <<= 1;
    string **ret = rawPointers(d_capacity);       // room for an extra string

    for (string **begin = d_str, **end = d_str + d_size;
            begin != end; ++begin)
        *ret = *begin;                            // copy existing strings

/*
    for (size_t idx = 0; idx != d_size; ++idx)    // copy existing strings
        ret[idx] = d_str[idx];
*/
    return ret;
}
