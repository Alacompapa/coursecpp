#include "demo.ih"

Demo &Demo::operator=(Demo &&tmp)
{
    cout << "Move assignment operator\n";
    return *this;
}
