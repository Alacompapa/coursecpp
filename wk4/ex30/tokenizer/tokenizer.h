#ifndef INCLUDED_TOKENIZER_
#define INCLUDED_TOKENIZER_

#include <iostream>

class Tokenizer
{
    std::istream &d_instream;
    std::string d_token;
    size_t d_lineNr;

    public:
        Tokenizer(std::istream instream);

        size_t lineNr() const; // returns line nr of currently processed input line
        //std::string token(); // returns last retrieved token
        void nextToken(); // retrieves next token from input stream
    private:
        
};
        
#endif
