#include "numbers.ih"

int &Numbers::at(size_t index) // for inspection
{
    if (index >= d_count)
    {
        cout << "Error out of bounds" << '\n';
        int returnvalue = 0;
        return returnvalue;
    }
    else
        return d_numbers[index];
}
