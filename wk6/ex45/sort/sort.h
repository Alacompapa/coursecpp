#ifndef INCLUDED_SORT_
#define INCLUDED_SORT_

#include <string>
#include <stdlib.h>

class Sort
{
    int (*d_ordering)(void const *first, void const *second);

    public:
        Sort(int (*ordering)(void const *first, void const *second));
        void sort(std::string **strings, size_t size);
};
        
#endif
