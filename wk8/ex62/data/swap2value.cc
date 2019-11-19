#include "data.ih"

void Data::swap2Value(Data &other)
{
    size_t tmp = other.u_value;
    other.u_value = u_value;
    u_value = tmp;
}
