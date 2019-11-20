#include "arg.ih"

//Arg &Arg::initialize(char const *optstring, int argc, char **argv)
{
    if (s_instance == nullptr)
        exit();

    int optcount = 0;
    while (optcount != -1)
    {
        optcount = getopt(argc, argv, opstring);
    }

}
