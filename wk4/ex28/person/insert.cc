#include "person.ih"

void Person::insert(ostream &stream) {
    stream << d_name << '\n' << 
              d_address << '\n' << 
              d_phone << '\n' << 
              d_mass << '\n';
}