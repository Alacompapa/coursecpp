#include "numbers.ih"

Numbers::Numbers(Numbers &&tmp) // move constructor
:
    d_numbers(tmp.d_numbers),
    d_count(tmp.d_count)
{
    tmp.d_numbers = 0;
    tmp.d_count = 0;
}
