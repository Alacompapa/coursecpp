#include "strings.ih"

Strings::Strings(char *environLike[])
:
    d_size(count(environLike)),
    d_str(new string* [d_size])
    // NOTE(bb): How to initialize capacity here?
{
    fill(environLike);
}
