#include "strings.ih"
#include <iostream>

Strings::~Strings()
{
    // NOTE(bb): remember d_str is now a double pointer so we need
    //  delete all objects seperately
    cout << "destructor called";
    for (size_t idx = 0; idx != d_size; ++idx)
        delete d_str[idx];
    delete[] d_str;
}
