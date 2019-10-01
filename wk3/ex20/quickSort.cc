#include "main.ih"

void quickSort()
{
    size_t i;
    for (i = 1; environ[i]; ++i)
    {
        cout << environ[i] << '\n';
    }

    char** env[] = { environ }
    string tmp;
    size_t first_pos = 0;
    string* left = environ[first_pos]
    string* right = environ[1:i]
    size_t last_pos = i;
    size_t pivot_pos = 0;
}
//
//
// /* partition */
//
// while (i <= j) {
//
//       while (arr[i] < pivot)
//
//             i++;
//
//       while (arr[j] > pivot)
//
//             j--;
//
//       if (i <= j) {
//
//             tmp = arr[i];
//
//             arr[i] = arr[j];
//
//             arr[j] = tmp;
//
//             i++;
//
//             j--;
//
//       }
//
// };
//
//
//
// /* recursion */
//
// if (left < j)
//
//       quickSort(arr, left, j);
//
// if (i < right)
//
//       quickSort(arr, i, right);
//
// }
