#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iostream>
#include <tuple>

struct Char
{
    unsigned char ch;                   // character seen
    size_t count;                       // frequency of character
};

struct CharInfo
{
    size_t nCharObj = 0;                // size of array
    Char *ptr = new Char[1]();          // dyn array of Char objs init to zero
};

enum Action { APPEND, INSERT, INC };

class CharCount
{
    struct Char d_Char; // Is this object necessary?
    struct CharInfo d_CharInfo;

    public:
        size_t const count(std::istream& stream);         
        struct CharInfo const &info();

    private:
        std::tuple<Action, size_t> locate(unsigned char ch);
                                    // inserts ch at index in new array
        Char *insert(Char *old, size_t oldsize, unsigned char ch, size_t index);
};

#endif
