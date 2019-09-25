#include "main.ih"

int main(int argc, char **argv)
try
{
    if (argc == 1)
    {
        usage("wc");
        return 1;
    }
    
    string argument = argv[1];
    char option = argument[1];
    size_t count = 0;
    switch (option)
    {
        case 'c':
            countChars();
            break;
        case 'w':
            countWords();
            break;
        case 'l':
            countLines();
            break;
        default:
            usage("wc");                    // no args given
            break;
    }
}
catch (...)
{
    return 1;
}
