#include "main.ih"
// NOTE(jashiel): we don't have to include factory.cc in our answers so we can just pretend a bit.
// NOTE(bb): not finished, dont know how to implement factory function
Demo factory()
{
    cout << "Factory function\n";
    return Demo();
}
