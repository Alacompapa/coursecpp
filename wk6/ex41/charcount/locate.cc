#include "charcount.ih"

void CharCount::locate(unsigned char ch)
{
    for (size_t index = 0; index != d_CharInfo.nCharObj; ++index) 
    {
        if (ch == d_CharInfo.ptr[index].ch)     // check if char already seen
        {
            (this->*s_transform[INC])(index, ch);
            return;
        }
        else if (ch < d_CharInfo.ptr[index].ch) // ch placed before  larger char
        {
            (this->*s_transform[INSERT])(index, ch);
            return;
        }
    }
                                                // ch not seen and is larger 
                                                // than any other seen
    (this->*s_transform[INSERT])(d_CharInfo.nCharObj, ch);
}
