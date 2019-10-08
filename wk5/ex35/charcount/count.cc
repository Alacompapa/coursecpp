#include "charcount.ih"

size_t CharCount::count(std::istream& stream)
{
    size_t counter = 0;
    unsigned char ch;
    while(stream >> ch)
    {
        ++counter;

        auto [ action, index ] = locate(ch);
        switch (action)
        {
            case APPEND:
                // append ch at end of `Char ptr[]`
            case INSERT:
                // insert another Char entry in ptr array
            case INC:
                // increment ptr[index].count
                ++d_CharInfo.ptr[index].count;
        }
    }

    return counter;
}
