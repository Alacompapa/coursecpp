#include "person.ih"

void Person::setPhone(string &phone)
{
    if (phone.find_first_not_of("0123456789") == string::npos)
        d_phone = phone;
    else
        d_phone = "- not available -";
}
