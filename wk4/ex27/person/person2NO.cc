#include "person.ih"

Person::Person(string name, string address, string phone, size_t mass)
:
    d_name{ name },
    d_address{ address },
    d_mass{ mass }
{
    setPhone(phone);
}
