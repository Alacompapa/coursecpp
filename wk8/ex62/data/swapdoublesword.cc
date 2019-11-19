#include "data.ih"

void Data::swapDoublesWord(Data &other)
{
    double *doubles = u_doubles;        // save current
    destroy(DOUBLES);                   // destroy current

    u_word = other.u_word;              // install at this
    other.destroy(WORD);                // destroy at other
    
    other.u_doubles = doubles;           // install at other
}
