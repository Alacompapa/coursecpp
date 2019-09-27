#include "main.ih"

void quickSort(string array[], int left, int right) {

    int tmp;

    // Partition
    int pivot = 0;
    while (left != right)
    {
        while (array[left] < pivot)
            ++left;

        while (array[right] > pivot)
            --right;

        if (left <= right)
        {
            tmp = array[left];
            array[left] = arr[right];
            array[right] = tmp;
            ++left;
            --right;
        }
    };

    // Recursion
    if (left < right)
        quickSort(array, left, right);
    if (left < right)
        quickSort(array, left, right);
}
