#include "main.ih"

void quickSort(string toSort[], size_t left, size_t right)
{
    if (left == right)                      // Stopping condition
        return;

    size_t pivot = partition(toSort, left, right);

    quickSort(toSort, pivot+1, right);           // Recursion step
}
