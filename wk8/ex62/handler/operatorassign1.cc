#include "handler.ih"

Handler &Handler::operator=(Handler const &other)
{
    Handler tmp{ other };
    swap(tmp);
    return *this;
}
