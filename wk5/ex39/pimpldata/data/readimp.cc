#include "dataimp.h"

bool Data::DataImp::read()
{   
    //d_text.clear();
    cin >> d_value;
    return cin.good();
}
