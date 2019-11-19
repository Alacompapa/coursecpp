#include "handler.ih"

void Handler::swap(Handler &other)
{
    d_data.swap(d_tag, other.d_data, other.d_tag);

    Data::Type tag = d_tag;             // swap tags
    d_tag = other.d_tag;
    other.d_tag = tag;
}
