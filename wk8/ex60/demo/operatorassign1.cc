#include "demo.ih"

Demo &Demo::operator=(Demo const &other)
{
    cout << "Copy assignment operator\n";
    return *this;
}
