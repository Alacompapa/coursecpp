#include "demo.ih"

Demo::Demo(Demo &&tmp)
{
    cout << "Move constructor\n";
}
