#include "main.ih"

ReturnValues combine(int argc, char **argv)
{
    ReturnValues retVal;                            // struct to be returned

    if (argc == 2 or stoi(argv[1]) >= argc)         // only true if requested
        retVal.ok = false;                          // arg exists
    else
        retVal.ok = true;

    retVal.nr = stoi(argv[1]);                      // requested arg number
                                                    // requested arg value
    retVal.value = retVal.ok ? argv[retVal.nr] : "";

    return retVal;
}
