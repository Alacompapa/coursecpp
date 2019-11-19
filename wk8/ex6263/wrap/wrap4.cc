#include "wrap.ih"

Wrap::Wrap(Wrap const &other)
:
    d_tag(other.d_tag),
    d_data(other.d_data, d_tag)
{}
