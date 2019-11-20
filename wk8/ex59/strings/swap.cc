#include "strings.ih"

void Strings::swap(Strings &other)
{
    string *tmpstr = d_str;             // swap string member
    d_str = other.d_str;
    other.d_str = tmpstr;

    size_t size = d_size;               // swap size
    d_size = other.d_size;
    other.d_size = size;
                                        // swap function ptr
    std::string *(Strings::*tmpenl)() = d_enlarge;
    d_enlarge = other.d_enlarge;
    other.d_enlarge = tmpenl;
                                        // swap number iterations
    size_t iterate = d_nIterate;
    d_nIterate = other.d_nIterate;
    other.d_nIterate = iterate;    
}
