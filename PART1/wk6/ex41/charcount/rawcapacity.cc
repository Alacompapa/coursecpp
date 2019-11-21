#include "charcount.ih"

CharCount::Char *CharCount::rawCapacity()
{
    return static_cast<Char *>(operator new (8 * sizeof(Char)));
}
