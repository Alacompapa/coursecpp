#include "arg.ih"

Arg::LongOption::LongOption(char const *name, Arg::Type type)
:
    d_name(name),
    d_type(type)
{}
