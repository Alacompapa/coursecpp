#include "numbers.ih"

void Numbers::at(size_t index) const // for inspection
{
    if (index >= d_count)
        cout << "Error out of bounds" << '\n';
    else
        cout << d_numbers[index] << '\n';
}
