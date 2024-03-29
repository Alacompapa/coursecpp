#ifndef _INCLUDED_PERSON_H
#define _INCLUDED_PERSON_H

#include <string>

class Person
{
    std::string d_name;
    std::string d_address = "--unknown--";
    std::string d_phone = "--unknown--";
    size_t      d_mass;

    public:

        Person();
        Person(std::string const &d_name,
            std::string const &d_address,
            std::string const &d_phone,
            size_t d_mass);

        void setName(std::string const &);
        void setAddress(std::string const &);
        void setPhone(std::string const &);
        void setMass(size_t);
        void insert(std::ostream&);
        void extract(std::istream&);

        std::string const &name()     const;
        std::string const &address()  const;
        std::string const &phone()    const;
        size_t mass()                 const;
};
#endif // PERSON_H
