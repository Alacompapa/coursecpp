#include "main.ih"

int main(int argc, char **argv)
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
