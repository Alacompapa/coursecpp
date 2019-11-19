#ifndef INCLUDED_WRAP_
#define INCLUDED_WRAP_

#include "../data/data.h"

class Wrap
{
    Data::Type d_tag;
    Data d_data;

    public:
        Wrap(double *doubles);
        Wrap(std::string const &word);
        Wrap(size_t value);

        Wrap(Wrap const &other);
        Wrap(Wrap &&tmp);
        
        ~Wrap();

        Wrap &operator=(Wrap const &other);
        Wrap &operator=(Wrap &&tmp);

        void swap(Wrap &other);

        Data::Type tag() const;
};
        
#endif
