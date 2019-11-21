#include "data.ih"

void Data::swap2Doubles(Data &other)
{
    double *tmp = other.u_doubles;
    other.u_doubles = u_doubles;
    u_doubles = tmp;
}
