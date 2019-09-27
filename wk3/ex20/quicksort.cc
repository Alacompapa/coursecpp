#include "main.ih"

void quickSort(string arr[], int left, int right) {

    int tmp;


    /* partition */
    int pivot = 0;
    while (left != right)
    {
        while (arr[left] < pivot)
            left++;

        while (arr[right] > pivot)
            right--;

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
    if (left < right)
        quickSort(arr, left, right);
    if (left < right)
        quickSort(arr, left, right);
}
