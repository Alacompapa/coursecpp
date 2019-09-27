#include "main.ih"

void quickSort(string arr[], int left, int right) {

    int tmp;


    /* partition */
    int pivot = 0;
    while (i != j)
    {
        while (arr[left] < pivot)
            i++;

        while (arr[right] > pivot)
            j--;

        if (left <= right)
        {
            tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
            left++;
            right--;
        }
    };

    /* recursion */
    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);
}
