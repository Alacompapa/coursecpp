#include "numbers.ih"

int &Numbers::at(size_t index) // for inspection
{
    if (index >= d_count)
    {
        cout << "Error out of bounds" << '\n';
        return d_numbers[0];
    }
    else
        return d_numbers[index];
}
