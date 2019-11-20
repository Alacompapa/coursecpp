#include "arg.ih"

Arg::Arg &initialize(char const *optstring, Arg::LongOption const *const begin, 
                     LongOption const *const end, int argc, char **argv)
:
    d_argc(argc),
    d_optstring(optstring),
    d_argv(argv),
    d_begin(begin),
    d_end(end)
{}
