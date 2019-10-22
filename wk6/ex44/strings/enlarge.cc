#include "strings.ih"

string **Strings::enlarge()
{
    d_capacity <<= 1;
    string **ret = rawPointers(d_capacity);       // room for an extra string

    for (string **begin = d_str, **end = d_str + d_size;
            begin != end; ++begin, ++ret)
        *ret = *begin;                            // copy existing strings
    ret -= d_size;

    return ret;
}
