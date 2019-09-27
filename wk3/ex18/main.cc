#include "main.ih"

int main(int argc, char **argv)
try
{
    if (argc == 1)                              
    {
        usage("combining");                     // too little args given
        return 1;
    }
    
    if (!structCall(argc, argv))                // requested arg doesnt exist
        return 0;

    boundCall(argc, argv);
}
catch (...)
{
    return 1;
}
