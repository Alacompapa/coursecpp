#include "person.ih"

// void Person::setExtract(string const &extract)
// {
//   int idx = 0;
//   while (idx != 4) {
//     getline(cin, extract, ",");
//     ++idx;
// }
//
// switch (1) {
//   case 1 : size_t blank = extract.find_first_of(" ");
//            name.append(extract, 0, blank);
//   case 2 : size_t blank = extract.find_first_of(" ");
//            address.append(extract, 0, blank);
//   case 3 : size_t blank = extract.find_first_of(" ");
//            phone.append(extract, 0, blank);
//   case 4 : mass = stoul(extract);
//            break;
// }

void Person::setName(string const &name) {
    d_name = name;
}

void Person::setAddress(string const &address) {
    d_address = address;
}

void Person::setPhone(string const &phone)
{
  if (phone.find_first_not_of("0123456789") == string::npos)
      d_phone = phone;
  else if (phone.empty())
      d_phone = "- not available -";
  else
      cout << "Hey friend, a phone number may only contain digits\n";
}

void Person::setMass(size_t mass) {
     d_mass = mass;
}

std::string const &Person::name() const {
    return d_name;
}

std::string const &Person::address() const {
    return d_address;
}

std::string const &Person::phone() const {
    return d_phone;
}

size_t Person::mass() const {
    return d_mass;
}

void Person::insert(ostream &stream) {
    stream << d_name << '\n' << 
              d_address << '\n' << 
              d_phone << '\n' << 
              d_mass << '\n';
}

void Person::extract(istream &stream) {
    string value;
    while(getline(istream, value, ',')) 
    {
        cout << value << '\n';

        if (istream.eof())
            break;
    }
}

Person::Person(string const &name, string const &address, string const &phone, size_t mass)
{
    d_name = name;
    d_address = address;
    setPhone(phone);
    d_mass = mass;
}

Person::Person()
{
    d_mass = 0;
}
