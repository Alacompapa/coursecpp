#include "handler.ih"

Handler::Handler(size_t value)
:
    d_tag(Data::Type::VALUE),
    d_data(value)
{
}
