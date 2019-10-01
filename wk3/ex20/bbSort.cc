#include "main.ih"

void quickSort(string toSort[], size_t left, size_t right)
{
    cout << "quickSort called \n on array ";
    for (size_t idx = 0; idx < 5; ++idx)
       cout << toSort[idx];
    cout << '\n'; 

    if (left >= right)                      // Stopping condition
        return;

    size_t mid = partition(toSort, left, right);

    quickSort(toSort, left, mid);           // Recursion step
    quickSort(toSort, mid + 1, right);
}
