#include "strings.ih"

Strings::~Strings()
{
    cout << "destructor called";
    delete[] d_str;
}
