#include "data.ih"

void Data::copy(Type current, Data const &other, Type next)
{
    Data tmp{ other, next };
    swap(current, tmp, next);
    tmp.destroy(current);
}
