#include "main.ih"

Options option(int argc, char **argv)
{
    if (argc == 3)
        return BINTOHUMAN;
    
    if (argc == 4)
    {
        string request{ argv[3] };
        return request == "-b" ? HUMANTOBIN : USAGE;
    }

    return USAGE;
}
