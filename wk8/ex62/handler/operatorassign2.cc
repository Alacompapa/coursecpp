#include "handler.ih"

Handler &Handler::operator=(Handler &&tmp)
{
    swap(tmp);
    return *this;
}
