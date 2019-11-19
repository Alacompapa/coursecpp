#include "data.ih"

void (Data::*Data::s_swap[][3])(Data &other) = 
{
    { &Data::swap2Doubles,     &Data::swapDoublesWord, &Data::swapDoublesValue },
    { &Data::swapWordDoubles,  &Data::swap2Word,       &Data::swapWordValue },
    { &Data::swapValueDoubles, &Data::swapValueWord,   &Data::swap2Value }
};
