#include "data.ih"

void Data::swapDoublesValue(Data &other)
{
    double *doubles = u_doubles;        // save current
    destroy(DOUBLES);                   // destroy current
                         
    u_value = other.u_value;            // install at this
    other.destroy(VALUE);               // destroy at other
                         
    other.u_doubles = doubles;          // install at other
}
