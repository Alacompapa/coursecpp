#include "data.ih"

void (Data::*Data::s_destroy[])() =
{
    &Data::destroyDoubles,
    &Data::destroyWord,
    &Data::destroyValue
};
