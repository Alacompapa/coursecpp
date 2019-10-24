#include "main.ih"

int increasing(void const *first, void const *second)
{
    return **static_cast<std::string *const *>(first) 
           < **static_cast<std::string *const *>(second) ? -1 :
           
           **static_cast<std::string *const *>(first)
           > **static_cast<std::string *const *>(second) ?  1 : 0;
}
