#include "wrap.ih"

Wrap::Wrap(Wrap &&tmp)
:
    d_tag(tmp.d_tag),
    d_data(tmp.d_data, d_tag)
{}
