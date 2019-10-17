#include "charcount.ih"

void CharCount::increment(size_t index)
{
    ++d_CharInfo.ptr[index].count;
}
