#ifndef INCLUDED_ARG_
#define INCLUDED_ARG_

#include <string>
#include "argoption/argoption.h"            // XXX are these necessary?
#include "arglongoption/arglongoption.h"
#include "optstructarray/optstructarray.h"

class Arg
{
    public:
        class LongOption//TODO
        {
            char *d_name;
            Arg::Type d_type = Arg::None;
            int d_optionChar = 0;

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

        
        size_t d_nArgs;
        size_t d_nOptions;
            
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
