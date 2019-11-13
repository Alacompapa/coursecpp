#include "main.ih"

data::Options option(int argc, char **argv)
{
// XXX: Questionable
    if (argc == 3)                  // only filesnames given 
        return data::WRITEHUMAN;
    
    if (argc == 4)                  // flag given?
    {
        string request{ argv[3] };
        return request == "-b" ? data::WRITEBINARY : data::USAGE;
    }

    return data::USAGE;             // unknown args given
}
