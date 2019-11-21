#ifndef INCLUDED_WRAP_
#define INCLUDED_WRAP_

#include "../data/data.h"

class Wrap
{
    Data::Type d_tag;
    Data d_data;

    public:
                                            // ctors
        Wrap(double *doubles);
        Wrap(std::string const &word);
        Wrap(size_t value);
                                            // copy move ctors
        Wrap(Wrap const &other);
        Wrap(Wrap &&tmp);
        
        ~Wrap();
                                            // assignment operators
        Wrap &operator=(Wrap const &other);
        Wrap &operator=(Wrap &&tmp);

        void swap(Wrap &other);

                                            // accessors
        Data::Type tag() const;
        double const *doubles() const;
        std::string const &word() const;
        size_t value() const;
};
        
#endif
