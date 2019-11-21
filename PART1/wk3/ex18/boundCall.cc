#include "main.ih"

void boundCall(int argc, char **argv)
{
    auto [ok, nr, value] = combine(argc, argv); // return combination without
    cout << nr << ' ' << value << '\n';         // defining local struct
}
