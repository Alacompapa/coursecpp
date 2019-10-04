#include "person.h"

using namespace std;

void Person::setExtract(string const &extract)
{
  int x = 0;
  while (x != 4) {
    getline(cin, extract, ",");
    ++x;
}
switch (1) {
  case 1 : size_t blank = extract.find_first_of(" ");
           name.append(extract, 0, blank);
  case 2 : size_t blank = extract.find_first_of(" ");
           address.append(extract, 0, blank);
  case 3 : size_t blank = extract.find_first_of(" ");
           phone.append(extract, 0, blank);
  case 4 : mass = stoul(extract);
           break;
}

}
void Person::setName(string const &name)
{
  d_name = name;
  return d_name;
}
void Person::setAddress(string const &address)
{
  d_address = address;
  return d_address;
}
void Person::setPhone(string const &phone)
{
  if (phone.find_first_not_of("0123456789") == string::npos)
      d_phone = phone;
      return d_phone;
  else if (phone.empty())
      d_phone = "- not available -"
  else
      cout << "Hey friend, a phone number may only contain digits\n"
}
void Person::setMass(size_t mass)
{
  d_mass = mass;
  return d_mass;
}
string const Person::setInsert(string d_name, string d_address, string d_phone, size_t d_mass) const;
{
  cout << "Your details:" << "\n";
  cout << "Your name is:" << d_name << "\n";
  cout << "Your address is:" << d_address << "\n";
  cout << "Your phone is:" << d_phone << "\n";
  cout << "Your mass is:" << d_mass << "\n";
}
