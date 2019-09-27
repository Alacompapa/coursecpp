#include "main.ih"

void boundCall(int argc, char **argv)
{
                                                // return combination without 
                                                // defining local struct
    cout << combine(argc, argv).nr << ' ' << combine(argc, argv).value << '\n';
}
