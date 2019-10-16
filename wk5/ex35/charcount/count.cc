#include "charcount.ih"

size_t const CharCount::count(std::istream& stream)
{
    unsigned char ch;
    while (stream >> std::noskipws >> ch)
    {
        auto [ action, index ] = locate(ch);

        switch (action)
        { 
            case INC:
                ++d_CharInfo.ptr[index].count;
                break;
            case APPEND:                // appending ch at end of `Char ptr[]`
            case INSERT:                // is the same as inserting at end
                d_CharInfo.ptr = 
                    insert(d_CharInfo.ptr, d_CharInfo.nCharObj, ch, index);
                ++d_CharInfo.nCharObj;
                break;
        }
    }

    return d_CharInfo.nCharObj;
}
