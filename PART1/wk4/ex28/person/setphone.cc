#include "person.ih"

void Person::setPhone(string const &phone)
{
    if (phone.find_first_not_of("0123456789") == string::npos)
        d_phone = phone;
    else if (phone.empty())
        d_phone = "- not available -";
    else
        cout << "Hey friend, a phone number may only contain digits\n";
}
