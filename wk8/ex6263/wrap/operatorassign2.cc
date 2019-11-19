#include "wrap.ih"

Wrap &Wrap::operator=(Wrap &&tmp)
{
    swap(tmp);
    return *this;
}
