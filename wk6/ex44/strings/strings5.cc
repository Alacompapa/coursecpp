#include "strings.ih"
#include <iostream>

Strings::~Strings()
{
    // NOTE(bb): remember d_str is now a double pointer so we need 
    //  delete all objects seperately
    cout << "destructor called";
    delete[] d_str;
}
