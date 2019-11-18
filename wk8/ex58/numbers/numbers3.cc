#include "numbers.ih"

Numbers::Numbers(size_t count, size_t value) // initialize
:
    d_numbers(new int[count]),
    d_count(count)
{
    for (size_t idx = 0; idx != count; ++idx)
        d_numbers[idx] = value;
}
