#include "strings.ih"

Strings::Strings(size_t nIterate, bool copy)
: 
    d_size(0),
    d_str(0),
    d_nIterate( nIterate )
{
    	if (copy)
		d_enlarge = &Strings::enlargeByCopy;
    	else	
		d_enlarge = &Strings::enlargeByMove;
}
