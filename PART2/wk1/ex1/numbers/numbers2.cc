#include "numbers.ih"

Numbers::Numbers(Numbers const &other) // copy constructor
:
    d_numbers(new int[other.d_count]),
    d_count(other.d_count)
{
    for (size_t idx = 0; idx != d_count; ++idx)
        d_numbers[idx] = other.d_numbers[idx];
}
