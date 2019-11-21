#include "strings.ih"

Strings &Strings::operator=(Strings const &other)   // Copy assignment operator
{
    Strings tmp{ other };
    return *this = std::move(tmp);
}
