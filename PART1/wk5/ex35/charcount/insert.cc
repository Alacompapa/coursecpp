#include "charcount.ih"

CharCount::Char* CharCount::insert(Char *old, size_t oldsize,
                        unsigned char ch, size_t index)
{
    size_t newsize = oldsize + 1;
    Char *tmp = new Char[newsize];
    Char charObj = { ch, 1 };

    for (size_t idx = 0; idx != newsize; ++idx)
        tmp[idx] = idx < index  ? old[idx] :
                   idx == index ? charObj  :
                   old[idx - 1];

    delete[] old;
    return tmp;
}
