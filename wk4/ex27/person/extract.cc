#include "person.ih"

void Person::extract(istream &stream)
{
    enum datamember { NAME, ADDRESS, PHONE, MASS };
    datamember members[4] = { NAME, ADDRESS, PHONE, MASS };

    string value;
    for (size_t idx = 0;
            idx != sizeof(members); 
            ++idx)
    {
        switch (members[idx])
        {
            case NAME:
                getline(stream, value, ',');
                setName(value);
                break;

            case ADDRESS:
                getline(stream, value, ',');
                setAddress(value);
                break;

            case PHONE:
                getline(stream, value, ',');
                setPhone(value);
                break;

            case MASS:
                getline(stream, value);
                setMass(stoul(value));
                break;
        }
    }
}
