#include "strings.ih"

Strings::Strings(Strings &&tmp)             // Move constructor
:
    d_str(tmp.d_str),
    d_size(tmp.d_size),
    d_capacity(tmp.d_capacity)
{
    tmp.d_str = 0;
    tmp.d_size = 0;
}
