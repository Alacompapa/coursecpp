#include "user.ih"

bool User::valid() const
{
    return (d_name.empty() and d_realName.empty() and 
            d_shell.empty() and d_groupId and
            d_userId);
}
