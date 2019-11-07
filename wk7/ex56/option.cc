#include "main.ih"

data::Options option(int argc, char **argv)
{
    if (argc == 3)
        return data::BINTOHUMAN;
    
    if (argc == 4)
    {
        string request{ argv[3] };
        return request == "-b" ? data::HUMANTOBIN : data::USAGE;
    }

    return data::USAGE;
}
