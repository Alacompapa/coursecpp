#include "wrap.ih"

Wrap::Wrap(std::string const &word)
:
    d_tag(Data::Type::WORD),
    d_data(word)
{
}
