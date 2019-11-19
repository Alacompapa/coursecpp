#include "handler.ih"

Handler::Handler(std::string const &word)
:
    d_tag(Data::Type::WORD),
    d_data(word)
{
}
