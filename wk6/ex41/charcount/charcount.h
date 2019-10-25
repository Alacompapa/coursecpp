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

    enum Action { INC, INSERT, APPEND };

    struct CharInfo d_CharInfo;

    public:
        size_t const count(std::istream& stream);
        CharCount::CharInfo const &info();
        size_t capacity() const; 
        CharCount::Char *rawCapacity();
        ~CharCount();

    private:
                        
        void locate(unsigned char ch);      // Now returns a func ptr

        CharCount::Char *enlarge(Char *old);
        void increment(size_t index, unsigned char ch);
        void insert(size_t index, unsigned char ch);
                                           // Array of action funcs
        static void (CharCount::*s_transform[])(size_t index, unsigned char ch);
};

#endif
