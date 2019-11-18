#ifndef INCLUDED_NUMBERS_
#define INCLUDED_NUMBERS_

#include <iosfwd>

class Numbers
{
    int *d_numbers = 0;
    size_t d_count;                         // amount of ints allocated

    public:
        Numbers(Numbers const &other);      // copy constructor
        Numbers(Numbers &&tmp);             // move constructor
        Numbers(size_t count, size_t value); // initialize values
        Numbers(size_t count);              // only allocate
        ~Numbers();

        void at(size_t index) const;        // for inspection
        void at(size_t index, int value);   // for modification
        void write(std::ostream &out) const;
        size_t length() const;

    private:
};

#endif
