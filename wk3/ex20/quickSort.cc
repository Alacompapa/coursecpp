#include "main.ih"

void quickSort()
{
    size_t i;
    for (i = 0; environ[i]; ++i)
    {

        cout << environ[i] << '\n';
    }
    size_t first_pos = 0;
    size_t last_pos = i;
    size_t pivot_pos = partition(environ, first_pos, last_pos)

}
