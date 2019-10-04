#include "user.ih"

bool User::inGroup(size_t gid) const
{
    if (d_groupId == gid)
        return true;
    else
        return false;
}
