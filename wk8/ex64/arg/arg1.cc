#include "arg.ih"

Arg::Arg &initialize(char const *optstring, int argc, char **argv)
:
    d_argc(argc),
    d_optstring(optstring),
    d_argv(argv)
{}
