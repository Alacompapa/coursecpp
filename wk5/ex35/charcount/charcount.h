#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iostream>

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

enum Actions { APPEND, INSERT, INC };

class CharCount
{
    struct Char d_Char;
    struct CharInfo d_CharInfo;

    public:
        size_t count(std::istream); // const    and    const?
                                    // count() should handle 
        struct CharInfo const &info();

    private:
        Actions locate(char ch); // should maybe also return index of where char
                          //   was found?
                          //
};
        
#endif
