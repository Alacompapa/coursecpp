#include "main.ih"

size_t partition(string array[], size_t left, size_t right)
{
  	size_t pivot = left;
    
    cout << "pivot " << pivot << '\n';
    size_t length = sizeof(array);
    for (size_t idx = 0; array[left] == array[right]; ++idx)
    {
        cout << "in loop \n" << " array[idx] " << array[idx] << '\n';
        if (array[idx] > array[pivot])
        {
          	// Alle elements to appear after the pivot element are swapped with the last element, reducing right before the swap.
          	--right;
            string tmp = array[idx];
            array[idx] = array[length-1];
            array[length-1] = tmp;
        }
      			// Likewise, array[left] elements to appear before the pivot element can be swapped with the pivot element.
				if (array[left] <= array[pivot])
        {
          	if (array[left] < array[pivot])
            		array[left]; 
          	pivot = left;
          	++left;
        }

    }

    string tmp = array[left];
    array[left] = pivot;
    array[right] = tmp;

    return pivot;
}
