#include "data.ih"

void (Data::*Data::s_move[])(Data &&other) =
{
    &Data::moveDoubles,
    &Data::moveWord,
    &Data::moveValue
};
