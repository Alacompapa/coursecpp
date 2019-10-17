#include "charcount.ih"

std::tuple<CharCount::Action, size_t> CharCount::locate(unsigned char ch)
{
    for (size_t index = 0; index != d_CharInfo.nCharObj; ++index) 
        if (ch == d_CharInfo.ptr[index].ch)     // check if char already seen
            return std::make_tuple(INC, index);
        else if (ch < d_CharInfo.ptr[index].ch) // ch placed before  larger char
            return  std::make_tuple(INSERT, index); 
                                                // ch not seen and is larger 
                                                // than any other seen
    return std::make_tuple(APPEND, d_CharInfo.nCharObj); 
}
