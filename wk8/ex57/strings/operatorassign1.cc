#include "strings.ih"

Strings &Strings::operator=(Strings const &other)   // Copy assignment
{
    Strings tmp{ other };
    return *this = std::move(tmp);
}
