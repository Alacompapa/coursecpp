#include "person.ih"

void Person::insert(ostream &stream) 
{
    stream << "name: " << d_name << '\n' <<
              << "address: " << d_address << '\n' <<
              << "phone: " << d_phone << '\n' <<
              << "mass: " << d_mass << '\n';
}
