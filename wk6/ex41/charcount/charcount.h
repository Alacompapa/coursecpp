#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iostream>
#include <tuple>


class CharCount
{
    struct Char
    {
        unsigned char ch;                   // character seen
        size_t count;                       // frequency of character
    };

    struct CharInfo
    {
        size_t capacity = 8;
        size_t nCharObj = 0;                // size of array
        Char *ptr = new Char[capacity]();   // dyn array of Char objs 
    };

    struct CharInfo d_CharInfo;

    public:
        size_t const count(std::istream& stream);         
        CharCount::CharInfo const &info();
        size_t capacity() const; // NEEDS IMPLEMENT
        

    private:                                
                        // Needs to return a func ptr
        std::tuple<CharCount::Action, size_t> locate(unsigned char ch);
                                            // inserts ch at index in new array
        CharCount::Char *insert(Char *old, size_t oldsize, 
                                unsigned char ch, size_t index);

        CharCount::Char *rawCapacity(); // NEEDS IMPLEMENT
        // enlarge member function returns void
        // funcs() for INC, INSERT, APPEND
        // array of ptrs to those funcs
};

#endif
