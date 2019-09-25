#include "main.ih"

ReturnValues combine(int argc, char **argv)
{
    ReturnValues retVal;

    if (argc == 2 or stoi(argv[1]) >= argc) 
        retVal.ok = false;
    else
        retVal.ok = true;

    retVal.nr = stoi(argv[1]);

    retVal.value = retVal.ok ? argv[retVal.nr] : "";

    return retVal;
}
