#include "numbers.ih"

void Numbers::write(ostream &out) const
{
    for (size_t idx = 0;idx != d_count;++idx)
    {
        cout << d_numbers[idx];
    }
    cout << '\n';
}
