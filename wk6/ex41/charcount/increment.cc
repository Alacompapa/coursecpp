#include "charcount.ih"

void CharCount::increment(size_t index, unsigned char ch)
{
    ++d_CharInfo.ptr[index].count;
}
