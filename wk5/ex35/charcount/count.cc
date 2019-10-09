#include "charcount.ih"

size_t CharCount::count(std::istream& stream)
{
    unsigned char ch;
    while(stream >> ch)
    {
        auto [ action, index ] = locate(ch);

        switch (action)
        { // inserting and appending is kinda the same thing so we can probably use fallthrough
            case INC:
                // increment ptr[index].count
                ++d_CharInfo.ptr[index].count;
                break;
            case APPEND:
                // append ch at end of `Char ptr[]`
            case INSERT:
                // insert another Char entry in ptr array
                d_CharInfo.ptr = insert(d_CharInfo.ptr, d_CharInfo.nCharObj, ch, index);
                ++d_CharInfo.nCharObj;
                break;
        }
    }

    return d_CharInfo.nCharObj;
}
