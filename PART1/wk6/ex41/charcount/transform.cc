#include "charcount.ih"

void (CharCount::*CharCount::s_transform[])(size_t index, unsigned char ch)
{
    &CharCount::increment,
    &CharCount::insert
};
