#include "main.ih"

data::Options option(int argc, char **argv)
{
    if (argc == 3)                  // only filesnames given 
        return data::BINTOHUMAN;
    
    if (argc == 4)                  // flag given?
    {
        string request{ argv[3] };
        return request == "-b" ? data::HUMANTOBIN : data::USAGE;
    }

    return data::USAGE;             // unknown args given
}
