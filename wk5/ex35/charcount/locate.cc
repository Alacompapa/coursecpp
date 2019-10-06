#include "charcount.ih"

Actions CharCount::locate(char ch)
{   // HOW TO RETURN AN ACTION AND AN INDEX?? ~~~~~~~~~~~~~~~~~ 
    size_t index = 0;
    for (; index != d_CharInfo.nCharObj; ++index) // loop over array
    {
        if (ch == d_CharInfo.ptr[index].ch)       // check if char already seen
            return INC; // Increment char at ???? index how to return that?
        elif ch less than char at index
            return INSERT at that index
        elif larger than largest
            break and return APPEND
    }


    
}
