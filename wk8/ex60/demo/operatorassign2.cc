#include "demo.ih"

Demo &Demo::operator=(Demo &&tmp)
{
    cout << "Calling : Assign2 op  on " << this << '\n';
    swap(tmp);
    return *this;
}
