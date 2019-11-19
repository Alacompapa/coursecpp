#include "data.ih"

void Data::moveWord(Data &&other)
{
    u_word = other.u_word;
}
