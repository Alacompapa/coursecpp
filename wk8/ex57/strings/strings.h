#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <cstring>
#include <iosfwd>
#include <string>

class Strings
{
    std::string *d_str = 0;
    size_t d_size = 0;
    size_t d_capacity = 1;

    public:

        struct POD
        {
            size_t      size;
            std::string *str;
        };

        Strings();
        Strings(int argc, char *argv[]);
        Strings(char **environLike);
        Strings(std::istream &in);
        Strings(Strings const &other);              // copy constructor
        Strings(Strings &&tmp);                     // move constructor
        void swap(Strings &other);

        ~Strings();
        char *strdupnew(char const *src);           // function for copying str
        Strings &operator=(Strings const &other);   // copy assignment
        Strings &operator=(Strings &&tmp);          // move assignment

        size_t size() const;
        std::string const *data() const;
        POD release();

        std::string const &at(size_t idx) const;
        std::string &at(size_t idx);

        void add(std::string const &next);          // add another element

    private:
        void fill(char *ntbs[]);                    // fill prepared d_str

        std::string &safeAt(size_t idx) const;      // private backdoor
        std::string *enlarge();

        static size_t count(char *environLike[]);   // # elements in env.like
};

inline char *Strings::strdupnew(char const *src)
{
  return strcpy(new char [strlen(src) + 1], src);
}

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
    return d_size;
}

inline std::string const *Strings::data() const
{
    return d_str;
}

inline std::string const &Strings::at(size_t idx) const
{
    return safeAt(idx);
}

inline std::string &Strings::at(size_t idx)
{
    return safeAt(idx);
}


#endif
