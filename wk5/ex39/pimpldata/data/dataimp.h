#ifndef INCLUDED_DATAIMP_ 
#define INCLUDED_DATAIMP_ 

#include "data.ih"

class DataImp
{
    std::string d_text;
    int d_value = 0;

    public:
        bool read();
        void display() const; 
};

#endif
