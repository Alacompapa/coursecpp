#include "strings.ih"
#include <iostream>

Strings::~Strings()
{
    cout << "destructor called";
    delete[] d_str;
}
