#include "person.ih"

void Person::extract(istream &stream) {
    string value;
    while(getline(stream, value, ',')) 
    {
        cout << value << '\n';

        if (stream.eof())
            break;
    }
}
