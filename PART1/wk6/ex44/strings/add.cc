#include "strings.ih"

void Strings::add(string const &next)
{
    if (d_size == d_capacity)
        d_str = enlarge();      // make room if necessary
    string *strNext = new string(next);
    d_str[d_size] = strNext; // store next
    ++d_size;   // update d_size
}
