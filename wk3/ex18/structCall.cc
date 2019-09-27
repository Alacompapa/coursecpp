#include "main.ih"

bool structCall(int argc, char **argv)
{
    ReturnValues retVals = combine(argc, argv);
    if (!retVals.ok)                            // requested arg doesnt exist
    {
        usage("combining");
        return false;
    }
    
    cout << retVals.nr << ' ' << retVals.value << '\n';

    return true;
}
