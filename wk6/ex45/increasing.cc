#include "main.ih"

int increasing(std::string **first, std::string **second)
{
    // returns <0 if first should go before second
    // returns 0 if first is equivalent to second
    // returns >0 if first should go after second
    return first < second  ? -1 : 
           first == second ? 0  :
           first > second  ? 1;
}
