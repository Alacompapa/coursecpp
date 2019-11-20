#include "strings.ih"

Strings::Strings(Strings const &other)      // Copy constructor
:
    d_str(rawPointers(other.size())),
    d_size(0)
{
    for (size_t idx = 0; idx != other.d_size; ++idx) {
        Strings::add(static_cast<const string>(*other.d_str[idx]));
    }
}
