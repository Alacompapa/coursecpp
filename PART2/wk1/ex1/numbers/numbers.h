#ifndef INCLUDED_NUMBERS_
#define INCLUDED_NUMBERS_

#include <iosfwd>

class Numbers
{
    int *d_numbers;
    size_t d_count; // amount of ints allocated

    public:
        Numbers(Numbers const &other); // copy
        Numbers(Numbers &&tmp); // move
        Numbers(size_t d_count, size_t value); // init count ints to value
        Numbers(size_t d_count); // allocate count ints but dont init
        ~Numbers();

       								// at member function so ints can be inspected and/or modified
        int &at(size_t index);

        void write(std::ostream &out);
        							// length member
        size_t length() const;
};

#endif
