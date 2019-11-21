#include "data.ih"

void Data::moveValue(Data &&other)
{
    u_value = other.u_value;
}
