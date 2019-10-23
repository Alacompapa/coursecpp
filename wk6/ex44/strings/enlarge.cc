#include "strings.ih"

string **Strings::enlarge()
{
    d_capacity <<= 1;
    string **ret = rawPointers(d_capacity);       // room for an extra string

    for (string **begin = d_str, **end = d_str + d_size;
            begin != end; ++begin, ++ret)
<<<<<<< HEAD
            {
        *ret = *begin;                            // copy existing strings
    }
    delete[] d_str;
=======
        *ret = *begin;                            // copy existing strings
>>>>>>> 655d8b8b5a3bb742bc7d80ff0ee170ff83323517
    ret -= d_size;

    return ret;
}
