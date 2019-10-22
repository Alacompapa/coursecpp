#include "strings.ih"

Strings::Strings(istream &in)
:
    d_size(0),
    d_str(0),
    d_capacity(1)
{
    string line;
    while (getline(in, line))
        add(line);
}
