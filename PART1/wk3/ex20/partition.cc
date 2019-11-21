#include "main.ih"

size_t partition(string array[], size_t left, size_t right)
{
    // implement the partition function so that its pivot element is the leftmost element
    size_t pivot = left;
;
    cout << "running" << "\n";
    for (size_t idx = left, length = right; idx < length-1; ++idx)
    {
        cout << left << pivot << right << '\n';

        if (array[idx] > array[pivot])
        {
        // Alle elements to appear after the pivot element are swapped with the last element, reducing right before the swap.
            --right;
            string tmp = array[idx];
            array[idx] = array[right];
            array[right] = tmp;
        }
        // Likewise, array[left] elements to appear before the pivot element can be swapped with the pivot element.
        if (array[left] < array[pivot])
        {
            string tmp = array[left];
            array[left] = array[pivot];
            array[pivot] = tmp;
        }
        if (array[left] <= array[pivot])
        {
            pivot = left;
            ++left;
        }
    }

    // The partition function returns the pivot index.
    return pivot;
}
