#include "numbers.ih"

void Numbers::at(size_t index, int value)   // for modification
{
    if (index >= d_count)
        cout << "Error out of bounds";
    else
        d_numbers[index] = value;
}
