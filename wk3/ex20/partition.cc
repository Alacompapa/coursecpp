#include "main.ih"

size_t partition(string array[], size_t left, size_t right)
{
    string pivot = array[right];
    cout << "pivot " << pivot << '\n';

    for (size_t idx = left; idx < right; ++idx)
    {
        cout << "in loop \n" << " array[idx] " << array[idx] << '\n';
        if (array[idx] <= pivot)
        {
            string tmp = array[idx];
            array[idx] = array[idx + 1];
            array[idx + 1] = tmp;
        }
    }

    string tmp = array[left];
    array[left] = pivot;
    array[right] = tmp;

    return left;
}
