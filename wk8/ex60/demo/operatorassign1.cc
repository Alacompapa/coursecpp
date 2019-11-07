#include "demo.ih"

Demo &Demo::operator=(Demo const &other)
{
    cout << "Calling : Assign1 op  on " << this << '\n';
    Demo tmp(other);
    swap(tmp);
    return *this;
}
