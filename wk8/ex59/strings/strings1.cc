#include "strings.ih"

Strings::Strings()
:
    d_size(0),
    d_str(0),
    d_enlarge(&Strings::enlargeByCopy)  // copying is default behavior
{}
