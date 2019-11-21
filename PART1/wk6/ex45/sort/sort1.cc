#include "sort.ih"

Sort::Sort(int (*ordering)(const void *first, const void *second))
: d_ordering{ ordering }
{
}
