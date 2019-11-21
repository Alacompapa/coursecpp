#include "charcount.ih"

void CharCount::insert(size_t index, unsigned char ch)
{
    if (d_CharInfo.nCharObj == d_CharInfo.capacity)
        d_CharInfo.ptr = enlarge(d_CharInfo.ptr);

    if (index < d_CharInfo.nCharObj)
    {               // copy all Chars after index to one place to the right
        for (Char *end = d_CharInfo.ptr + d_CharInfo.nCharObj, 
                *begin = d_CharInfo.ptr + index;
                begin != end; --end)
            *end = *(end - 1);
    }
        

    d_CharInfo.ptr[index] = Char{ ch, 1 };
    ++d_CharInfo.nCharObj;
}
