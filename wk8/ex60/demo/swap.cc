#include "demo.ih"

void Demo::swap(Demo &other)
{
    char buffer[sizeof(Demo)];
    memcpy(buffer, &other, sizeof(Demo));
    memcpy(reinterpret_cast<char *>(&other), this,   sizeof(Demo));
    memcpy(reinterpret_cast<char *>(this),   buffer, sizeof(Demo));
}
