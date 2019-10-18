#include "charcount.ih"

CharCount::Char *CharCount::enlarge(Char *old)
{
                                            // double size of dyn array
    Char *tmp = new Char[d_CharInfo.capacity << 1];
                                            // copy array
    for (Char *begin = old, *end = old + d_CharInfo.capacity;
            begin != end; ++begin, ++tmp)
        *tmp = *begin;
    tmp -= d_CharInfo.capacity;
    
    d_CharInfo.capacity <<= 1;              // double capacity
    delete[] old;
    return tmp;
}
