#include "main.ih"

void boundCall(int argc, char **argv)
{
    cout << combine(argc, argv).nr << ' ' << combine(argc, argv).value << '\n';
}
