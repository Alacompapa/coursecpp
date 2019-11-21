#include "charcount.ih"
#include <iostream>

CharCount::~CharCount()
{
    delete[] d_CharInfo.ptr;
    cout << "destructor called";

}
