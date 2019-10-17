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
                increment(index);
                break;
            case APPEND:                // appending ch at end of `Char ptr[]`
            case INSERT:                // is the same as inserting at end
                insert(index, ch);
                break;
        }
    }

    return d_CharInfo.nCharObj;
}
