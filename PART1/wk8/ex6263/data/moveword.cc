#include "data.ih"

void Data::moveWord(Data &&other)
{
    u_word = std::move(other.u_word);
}
