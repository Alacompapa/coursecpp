#include "strings.ih"

void Strings::add(string const &next)
{
    if (d_size == d_capacity)
        d_str = enlarge();      // make room if necessary

    *d_str[d_size] = next; // store next
    ++d_size;   // update d_size
}
/*
// OLD WAY
void Strings::add(string const &next)
{
    string *tmp = enlarge();            // make room for the next string,
                                        // tmp is the new string *

    tmp[d_size] = next;                 // store next

    delete[] d_str;                     // return old memory

    d_str = tmp;                        // update d_str and d_size
    ++d_size;
}
*/
