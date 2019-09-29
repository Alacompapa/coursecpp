#include "main.ih"

void show(bool bits[], size_t size)          
{                                       
    for (size_t idx = 0; idx != size; ++idx) 
        if (bits[idx] == true)
            cout << idx << ' ';

    cout << '\n';                       // Newline only at end of display            
}
