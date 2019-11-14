#include "strings.ih"

Strings::Strings(size_t nIterate, bool copy)
: 
    d_size(0),
    d_str(0),
    d_nIterate( nIterate )
{
    d_copyOrMove = copy ? &Strings::enlargeByCopy : &Strings::enlargeByMove; 
}
