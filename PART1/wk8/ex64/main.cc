#include "main.ih"

namespace
{
    Arg::LongOption longOptions[] = 
    {
        Arg::LongOption{"debug"},
        Arg::LongOption{"filenames", 'f'},
        Arg::LongOption{"help", 'h'},
        Arg::LongOption{"version", 'v'},
    };
    //auto longEnd = longOptions + std::size(longOptions); //XXX doenst work on g++5
    auto longEnd = longOptions + 4; // XXX test with magic number
}

int main(int argc, char **argv)
{
    Arg &arg = Arg::initialize("df:hv", 
                    longOptions, longEnd, argc, argv);

    // code using arg, etc.
}
