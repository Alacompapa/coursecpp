#include "sort.ih"

Sort::Sort(int (*ordering)(std::string **first, std::string **second))
: d_ordering{ ordering }
{
}
