#include "numbers.ih"

Numbers::Numbers(size_t count)              // only allocate
:
    d_numbers(new int[count]),
    d_count(count)
{
}
