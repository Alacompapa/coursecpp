#ifndef INCLUDED_NUMBERS_
#define INCLUDED_NUMBERS_

#include <iosfwd>

class Numbers
{
    int *d_numbers = 0;
    size_t d_count; // amount of ints allocated

    public:

        Numbers(); // TODO: default constructor should be deleted?
        Numbers(Numbers const &other); // copy
        Numbers(Numbers &&tmp); // move
        Numbers(size_t count, size_t value); // init count ints to value
        Numbers(size_t count); // allocate count ints but dont init
        ~Numbers();

        // at member function so ints can be inspected and/or modified
        void at(size_t index) const; // for inspection
        void at(size_t index, int value); // for modification
        // write member writes it to an ostream TODO: What is 'it'
        void write(std::ostream &out) const;
        // length member
        size_t length() const;

    private:
};

#endif
