#ifndef _INCLUDED_PERSON_H
#define _INCLUDED_PERSON_H

#include <iostream>
#include <string>
#include <sstream>

class Person
{
    std::string d_name;
    std::string d_address;
    std::string d_phone;
    size_t      d_mass;

    public:
        Person();
        Person(std::string const &name,
            std::string const &address = "--unknown--",
            std::string const &phone = "--unknown--",
            size_t mass = 0);

        void setName(const std::string&);
        void setAddress(const std::string&);
        void setPhone(const std::string&);
        void setMass(size_t);
        void insert(std::ostream&);
        void extract(std::istream&);

        std::string const &name()     const;
        std::string const &address()  const;
        std::string const &phone()    const;
        size_t mass()                 const;
};
#endif // PERSON_H
