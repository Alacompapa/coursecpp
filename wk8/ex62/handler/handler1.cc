#include "handler.ih"

Handler::Handler(double *doubles)
:
    d_tag(Data::Type::DOUBLES),
    d_data(doubles)
{
}
