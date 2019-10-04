#include "person.ih"

void Person::extract(istream &stream) {
    string value;
    while(getline(istream, value, ',')) 
    {
        cout << value << '\n';

        if (istream.eof())
            break;
    }
}