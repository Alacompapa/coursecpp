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
        size_t nCharObj = 0;                // size of array
        Char *ptr = new Char[0]();          // dyn array of Char objs 
    };

    enum Action { APPEND, INSERT, INC };     

    struct CharInfo d_CharInfo;

    public:
        size_t const count(std::istream& stream);         
        CharCount::CharInfo const &info();

    private:
        std::tuple<CharCount::Action, size_t> locate(unsigned char ch);
                                            // inserts ch at index in new array
        CharCount::Char *insert(Char *old, size_t oldsize, 
                                unsigned char ch, size_t index);
};

#endif
