#include "main.ih"

void quickSort(string toSort[], size_t left, size_t right)
{
    if (left >= right)                      // Stopping condition
        return;

    size_t mid = partition(toSort, left, right);

    quickSort(toSort, left, mid);           // Recursion step
    quickSort(toSort, mid + 1, right);
}
