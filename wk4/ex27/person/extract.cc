#include "person.ih"

void Person::extract(istream &stream) {
    enum datamember { NAME, ADDRESS, PHONE, MASS };
    datamember members[4] = { NAME, ADDRESS, PHONE, MASS };

    size_t idx = 0;
    string value;
    while (getline(stream, value, ',')) 
    {
        switch (members[idx])
        {
            default:
                idx++;

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

        if (stream.eof())
            break;
    }
}
