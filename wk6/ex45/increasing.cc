#include "main.ih"

int increasing(void const *first, void const *second)
{
    // returns <0 if first should go before second
    // returns 0 if first is equivalent to second
    // returns >0 if first should go after second
cout << "param1 is " << first << '\n';
cout << "param2 is " << second << '\n';
cout << "in increasing \n";
    string *const *f = static_cast<std::string* const *>(first);
    string *const *s = static_cast<std::string* const *>(second);
cout << "first string is " << **f << '\n';
cout << "second string is " << **s << '\n';
cout << '\n';

    return **f < **s ? -1 :
           **f > **s ?  1 : 0; 
/*
    if ( **(std::string**)first <  **(std::string**)(second) ) return -1;
    if ( **(std::string**)first == **(std::string**)(second) ) return  0;
    if ( **(std::string**)first >  **(std::string**)(second) ) return  1;
*/

   /* 
    return *static_cast<std::string *>(first) < *static_cast<std::string *>(second)  ? -1 : 
           *static_cast<std::string *>(first) == *static_cast<std::string *>(second) ? 0  : 1;
*/
}
