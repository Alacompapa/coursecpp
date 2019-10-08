#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iostream>
#include <tuple>

struct Char
{
    char ch;                        // character seen
    size_t count;                   // frequency of character
};

struct CharInfo
{
    size_t nCharObj;                // size of array
    struct Char ptr[];              // array of Char objects
};

enum Action { APPEND, INSERT, INC };

class CharCount
{
    struct Char d_Char;
    struct CharInfo d_CharInfo;

    public:
        size_t count(std::istream stream); // const    and    const?
                                    // count() should handle 
        struct CharInfo const &info();

    private:
        std::tuple<Action, size_t> locate(unsigned char ch); 
};
        
#endif
