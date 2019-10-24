#include "main.ih"

int nocasedec(void const *first, void const *second)
{
    return -strcasecmp((**static_cast<std::string *const *>(first)).c_str(),
           (**static_cast<std::string *const *>(second)).c_str());
}
