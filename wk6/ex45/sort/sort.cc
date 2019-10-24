#include "sort.ih"

void Sort::sort(std::string **strings, size_t nmemb)
{
    // void qsort(void *base, size_t nmemb, size_t size,
    //              int (*compar)(const void *, const void *));
    // nmemb: number of elems
    // size: size of elems
    // base: pointer to start of array
    // compar: comparison func
    // qsort swaps the memory of the two arguments 
    // this is not always possible hence we use ptrs to ptrs to strings
    //
    // We want to check the strings but swap the pointers

cout << "sorting \n";
    qsort(strings, nmemb, sizeof(std::string *), d_ordering);
}
