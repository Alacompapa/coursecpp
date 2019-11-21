#include "charcount.ih"

size_t const CharCount::count(std::istream& stream)
{
    unsigned char ch;
    while (stream >> std::noskipws >> ch)
        locate(ch);

    return d_CharInfo.nCharObj;
}
