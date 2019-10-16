#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <string>

class Data
{
    class DataImp;
    DataImp *d_pimpl;

    public:
        Data();

        bool read();
        void display() const; 
};
        
#endif
