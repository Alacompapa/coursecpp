#ifndef INCLUDED_TOKENIZER_
#define INCLUDED_TOKENIZER_

#include <iostream>

class Tokenizer
{
    std::istream &d_instream;
    std::string d_token;

    public:
        Tokenizer(std::istream instream);

        size_t lineNr(); // returns line nr of currently processed input line
        //std::string token(); // returns last retrieved token
        //nextToken(); // retrieves next token from input stream
    private:
        
};
        
#endif
