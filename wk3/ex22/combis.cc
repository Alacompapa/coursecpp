#include "main.ih"

void combis(size_t idx, bool bits[])
{
    if (idx == nTotal)
    {
        size_t count = 0;
        for (size_t index = 0; index < nTotal; ++index) 
            count += bits[index];

        if (count >= nRequired)
            show(bits, nTotal);

        return;
    }

    bits[idx] = true;
    combis(idx + 1, bits);

    bits[idx] = false;
    combis(idx + 1, bits);
}
