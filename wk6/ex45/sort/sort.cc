#include "sort.ih"

void Sort::sort(std::string **strings, size_t nmemb)
{
    qsort(strings, nmemb, sizeof(std::string *), d_ordering);
}
