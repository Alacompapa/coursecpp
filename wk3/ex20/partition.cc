#include "main.ih"

size_t partition(string array[], size_t left, size_t right)
{
  	size_t pivot = left;

    cout << "pivot " << pivot << '\n';
    size_t length1 = sizeof(array);
    size_t length2 = sizeof(array[0]);
    cout << array[0] << '\n';
    cout << length1 << '\n';
    cout << length2 << '\n';
    size_t length = length1/length2;
  	while (array[left] != array[right]){
        for (size_t idx = 0; idx < (length1/length2); ++idx)
        {
            // cout << idx << '\n';
            // cout << pivot << ' ' << left << ' ' << right << ' ' << '\n';
            if (array[idx] > array[pivot])
            {
            // Alle elements to appear after the pivot element are swapped with the last element, reducing right before the swap.
                --right;
                string tmp = array[idx];
                cout << array[(length-1)] << '\n';

                array[idx] = array[length-1];
                array[length-1] = tmp;
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
  	}

    // The partition function returns the pivot index.
    return pivot;
}
