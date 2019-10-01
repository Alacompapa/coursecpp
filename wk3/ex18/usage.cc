//                     usage.cc
namespace {
    char const usageInfo[] = 
        R"(
Should be called with appropriate arguments.
    1st arg:    Number of the argument requested.
    other args: Arguments which can be requested.
        )";
}

#include "main.ih"

void usage(std::string const &progname)
{
    cout << usageInfo;
}
