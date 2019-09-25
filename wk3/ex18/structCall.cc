#include "main.ih"

bool structCall(int argc, char **argv)
{
    ReturnValues retVals = combine(argc, argv);
    if (!retVals.ok)
    {
        // Usage func here?
        cout << "Please specify correct arguments." << '\n' 
            << "An integer value specifying which of the arguments is to be selected."
            << '\n';

        return false;
    }
    
    cout << retVals.nr << ' ' << retVals.value << '\n';

    return false;
}
