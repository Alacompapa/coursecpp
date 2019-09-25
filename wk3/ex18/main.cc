#include "main.ih"

int main(int argc, char **argv)
try
{
    if (argc == 1)
    {
        usage("combining");
        return 1;
    }
    
    if (!structCall(argc, argv))
        return 0;

    boundCall(argc, argv);
}
catch (...)
{
    return 1;
}
