#ifndef INCLUDED_ARG_
#define INCLUDED_ARG_

#include <string>

class Arg
{
    enum Type 
    {
        None,
        Required,
        Optional
    };
        
    static Arg *s_instance;             // singleton
    
    public:
        class LongOption
        {
            public:
                LongOption(char const *name, Arg::Type type = Arg::None);
                LongOption(char const *name, int optionChar);
        };

        Arg(Arg const &other) = delete; // no copy ctor

        static Arg &initialize(char const *optstring, int argc, char **argv);
        static Arg &initialize(char const *optstring, 
                               LongOption const *const begin, 
                               LongOption const *const end, 
                               int argc, char **argv);
        static Arg &instance();         // only available after initialize
                                        
                                        // returns idx after removing options
        char const *arg(unsigned int idx) const;
        std::string const &basename() const;
        size_t nArgs() const;
        size_t nOptions() const;
        size_t option(int opt) const;
        size_t option(std::string const &options) const;
        size_t option(std::string *value, int option) const;
        size_t option(std::string *value, char const *longOption) const;

    private:
        Arg();
};
        
#endif