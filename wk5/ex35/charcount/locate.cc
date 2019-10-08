#include "charcount.ih"

std::tuple<Action, size_t> CharCount::locate(unsigned char ch)
{   
    size_t index = 0;
    for (; index != d_CharInfo.nCharObj; ++index) // loop over array
    {
        if (ch == d_CharInfo.ptr[index].ch)       // check if char already seen
            return std::make_tuple(INC, index); 
        else if (ch > d_CharInfo.ptr[index].ch) // ch not seen and should be
                                                // placed before this larger char
            return  std::make_tuple(INSERT, index); // INSERT at index - 1
    }

    return std::make_tuple(APPEND, index); // ch not seen and is larger than any other seen
}
