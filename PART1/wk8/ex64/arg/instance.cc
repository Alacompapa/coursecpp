#include "arg.ih"

Arg &Arg::instance()
{
    if (s_instance == nullptr)
        exit();

    return *this;
}
