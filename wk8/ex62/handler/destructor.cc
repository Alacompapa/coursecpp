#include "handler.ih"

Handler::~Handler()
{
    d_data.destroy(d_tag);
}
