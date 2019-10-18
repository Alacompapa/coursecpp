#include "sort.ih"

Sort::Sort(void (*ordering)(std::string **first, std::string **second))
{
    d_ordering = ordering;
}
