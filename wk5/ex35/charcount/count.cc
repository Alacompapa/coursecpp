#include "charcount.ih"

size_t CharCount::count(std::istream stream)
{
    //  Find next character, name it ch
    //char ch = 
    //  use CharCount::locate to know if we've seen it already
    //auto [ Action, index] = locate(ch);
    //  with Action and index, place it in the array 


    unsigned char ch;
    while(stream >> ch)
    {
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
}
