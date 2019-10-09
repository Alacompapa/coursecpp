#include "person.ih"

Person::Person(string name, string address,
                string phone, size_t mass)
{
    d_name = name;
    d_address = address;
    setPhone(phone);
    d_mass = mass;
}
