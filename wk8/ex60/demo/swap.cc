#include "demo.ih"

void Demo::swap(Demo &other)
{
    char buffer[sizeof(Demo)];
    memcpy(buffer, this, sizeof(Demo));
    memcpy(reinterpret_cast<void *>(this), &other,   sizeof(Demo));
    memcpy(reinterpret_cast<void *>(&other), buffer, sizeof(Demo));
}
