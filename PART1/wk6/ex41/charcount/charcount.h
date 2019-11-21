#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iosfwd>

class CharCount
{
    struct Char
    {
        char ch;                   // character seen
        size_t count;                       // frequency of character
    };

    struct CharInfo
    {
        size_t capacity = 8;
        size_t nCharObj = 0;                // size of array
        Char *ptr = new Char[capacity]();   // dyn array of Char objs
    };
  private:
      enum Action
      {
        INC,
        INSERT,
        APPEND
      };

      CharInfo d_CharInfo;

    public:
        CharCount();
        ~CharCount();

        size_t count(std::istream& stream);
        CharInfo const &info() const;
        size_t capacity() const;
        CharCount::Char *rawCapacity();

    private:
        void locate(unsigned char ch);      // Now returns a func ptr
        void increment(size_t index, unsigned char ch);
        void insert(size_t index, unsigned char ch);

        CharCount::Char *enlarge(Char *old);
                                           // Array of action funcs
        static void (CharCount::*s_transform[])(size_t index, unsigned char ch);
};

#endif
