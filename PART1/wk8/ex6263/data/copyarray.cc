#include "data.ih"

void (Data::*Data::s_copy[])(Data const &other) =
{
    &Data::copyDoubles,
    &Data::copyWord,
    &Data::copyValue
};
