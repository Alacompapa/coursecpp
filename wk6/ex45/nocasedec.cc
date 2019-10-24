#include "main.ih"

int nocasedec(void const *first, void const *second)
{
    // returns <0 if first should go before second
    // returns 0 if first is equivalent to second
    // returns >0 if first should go after second
//strcasecmp(str1.c_str(), str2.c_str())       
    
    string *const *f = static_cast<std::string* const *>(first);
    string *const *s = static_cast<std::string* const *>(second);
    
    return -strcasecmp((**f).c_str(), (**s).c_str());
}
