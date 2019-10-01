#include "main.ih"

void show(bool bits[], size_t size)     // Displays which bits are set       
{                                       
    for (size_t idx = 0; idx != size; ++idx) 
        if (bits[idx])
            cout << idx << ' ';

    cout << '\n';                       // Newline only at end of display            
}
