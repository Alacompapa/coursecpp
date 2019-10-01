#include "main.ih"

void combis(size_t idx, bool bits[])
{
    if (idx == nTotal)
    {
        show(bits, nTotal);
        return;
    }

    bits[idx] = true;
    combis(idx + 1, bits);

    bits[idx] = false;
    combis(idx + 1, bits);
}
