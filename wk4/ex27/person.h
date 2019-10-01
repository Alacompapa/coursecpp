#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

class Person
{
  std::string d_name;
  std::string d_address;
  std::string d_phone;
  std::string d_insert;
  std::string d_extract;
  size_t      d_mass;
public:
    void setName(std::string const &name);
    void setAddress(std::string const &address);
    void setPhone(std::string const &phone);
    void setMass(size_t mass);
    void setInsert(string d_name, string d_address, string d_phone, size_t d_mass);
    void setExtract(std_string const &extract);

    std::string const &name()     const;
    std::string const &address()  const;
    std::string const &phone()    const;
    size_t mass()                 const;
    std::string const &insert()   const;
    std::string const &extract()  const;
};

#endif // PERSON_H
