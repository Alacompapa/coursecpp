#include "strings.ih"

Strings &Strings::operator=(Strings &&tmp)  // Move assignment operator
{
    swap(tmp);
    return *this;
}
