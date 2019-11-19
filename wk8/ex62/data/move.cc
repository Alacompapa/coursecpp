#include "data.ih"

void Data::move(Type current, Data &&tmp, Type next)
{
    swap(current, tmp, next);
}
