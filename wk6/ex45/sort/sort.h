#ifndef INCLUDED_SORT_
#define INCLUDED_SORT_

#include <string>
#include <stdlib.h>

class Sort
{
    void (*d_ordering)(std::string **first, std::string **second);

    public:
        Sort(int (*ordering)(std::string **first, std::string **second));

    private:
        void sort(std::string **strings, size_t size);
};
        
#endif
