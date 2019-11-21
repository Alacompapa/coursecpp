#include "numbers.ih"

Numbers::Numbers(size_t count) // allocate count ints but dont init them
:
    d_numbers(new int[count]),
    d_count(count)
{
}
