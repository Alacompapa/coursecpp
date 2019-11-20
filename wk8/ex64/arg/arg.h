#ifndef INCLUDED_ARG_
#define INCLUDED_ARG_

#include <string>

class Arg
{
    public:
        class LongOption//TODO
        {
            public:
                LongOption(char const *name, Arg::Type type = Arg::None);
                LongOption(char const *name, int optionChar);
        };

    private:
        enum Type 
        {
            None,
            Required,
            Optional
        };

        char const *d_optstring;
        int d_argc;
        char **d_argv;

        LongOption const *const d_begin;
        LongOption const *const d_end;
            
        static Arg *s_instance = 0;             // singleton//TODO
    
    public:

        Arg(Arg const &other) = delete; // no copy ctor

        static Arg &initialize(char const *optstring, int argc, char **argv);//TODO
        static Arg &initialize(char const *optstring, 
                               LongOption const *const begin, 
                               LongOption const *const end, 
                               int argc, char **argv);//TODO
        static Arg &instance();         // only available after initialize
                                        
                                        // returns idx after removing options
        char const *arg(unsigned int idx) const;//TODO
        std::string const &basename() const;//TODO
        size_t nArgs() const;//TODO
        size_t nOptions() const;//TODO
        size_t option(int opt) const;//TODO
        size_t option(std::string const &options) const;//TODO
        size_t option(std::string *value, int option) const;//TODO
        size_t option(std::string *value, char const *longOption) const;//TODO

    private:
        Arg();//TODO
};
        
#endif
