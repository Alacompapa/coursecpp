#include "person.ih"

void Person::extract(istream &stream) {
    enum datamember = { NAME, ADDRESS, PHONE, MASS };
    datamember member = NAME;
    string value;
    while(getline(stream, value, ',')) 
    {
        switch(member++)
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

        if (stream.eof())
            break;
    }
}
