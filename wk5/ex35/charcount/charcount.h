#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iostream>

enum Actions { APPEND, INSERT, INC };

class CharCount
{
                                    // data members
    public:
        size_t count(std::istream); // const    and    const?
        struct CharInfo const &info();

    private:
        Actions locate();
};
        
#endif
