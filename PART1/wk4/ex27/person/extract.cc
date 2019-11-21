#include "person.ih"

void Person::extract(istream &stream)
{
    string value;

    getline(stream, value, ',');
    setName(value);
    getline(stream, value, ',');
    setAddress(value);
    getline(stream, value, ',');
    setPhone(value);
    getline(stream, value);
    setMass(stoul(value));
}
