#ifndef INCLUDED_HANDLER_
#define INCLUDED_HANDLER_

#include "../data/data.h"

class Handler
{
    Data::Type d_tag;
    Data d_data;

    public:
        Handler(double *doubles);
        Handler(std::string const &word);
        Handler(size_t value);

        Handler(Handler const &other);
        Handler(Handler &&tmp);
        
        ~Handler();

        Handler &operator=(Handler const &other);
        Handler &operator=(Handler &&tmp);

        void swap(Handler &other);

        Data::Type tag() const;
};
        
#endif
