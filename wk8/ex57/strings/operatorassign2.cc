#include "strings.ih"

Strings &Strings::operator=(Strings &&tmp)  // Move assignment
{
    swap(tmp);
    return *this;
}
