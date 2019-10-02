#include <iostream>
#include <string>
#ifndef PERSON_H
#define PERSON_H


class Person
{
  std::string d_name;
  std::string d_address;
  std::string d_phone;
  std::string d_insert;
  std::string d_extract;
  size_t      d_mass;
public:
	Person();

    void setName(std::string const);
    void setAddress(std::string const);
    void setPhone(std::string const);
    void setMass(size_t);
    void setInsert(std::string , std::string , std::string , size_t);
    void setExtract(std::string const);

    std::string const &name()     const;
    std::string const &address()  const;
    std::string const &phone()    const;
    size_t mass()                 const;
    std::string const &insert()   const;
    std::string const &extract()  const;
};

#endif // PERSON_H
using namespace std;
