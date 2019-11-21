#include "data.ih"

Data::Data(Data &&tmp, Type type)
{
    swap(VALUE, tmp, type);                 // VALUE is a dummy
}
