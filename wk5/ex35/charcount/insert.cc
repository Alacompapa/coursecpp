#include "charcount.ih"

Char* CharCount::insert(Char *old, size_t oldsize,
                        unsigned char ch, size_t index)
{
    size_t newsize = oldsize + 1;
    Char *tmp = new Char[newsize];
    Char charObj = { ch, 1 };

    for (size_t idx = 0; idx != newsize; ++idx)
    {
        if (idx < index)
            tmp[idx] = old[idx];
        else if (idx == index)
            tmp[idx] = charObj;
        else if (idx > index)
            tmp[idx] = old[idx - 1];
    }

    delete[] old;
    return tmp;
}
