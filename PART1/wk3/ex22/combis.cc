#include "main.ih"

void combis(size_t idx, bool bits[])
{
    if (idx == nTotal)                      // Stopping condition
    {
        size_t count = 0;                   
        for (size_t index = 0; index !=  nTotal; ++index) 
            count += bits[index];           // Only include combis of
                                            // at least nRequired elements
        if (count >= nRequired)
            show(bits, nTotal);

        return;
    }
                                            // Recursively find all 
    bits[idx] = true;                       // combinations
    combis(idx + 1, bits);

    bits[idx] = false;
    combis(idx + 1, bits);
}
