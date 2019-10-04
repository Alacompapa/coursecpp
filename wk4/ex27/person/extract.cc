#include "person.ih"

void Person::extract(istream &stream) {
    enum datamember { NAME, ADDRESS, PHONE, MASS };
    datamember members[4] = { NAME, ADDRESS, PHONE, MASS };

    string value;
    for (size_t idx = 0; 
            getline(stream, value, ',') or idx != 4;
            ++idx)
    {
        switch (members[idx])
        {
            case NAME:
                setName(value);
                break;

            case ADDRESS:
                setAddress(value);
                break;

            case PHONE:
                setPhone(value);
                break;

            case MASS:
                setMass(stoi(value));
                break;
        }
    }
}
