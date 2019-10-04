#include "user.ih"

std::string User::homeDir() const
{
    return d_homeDir + '/';
}
