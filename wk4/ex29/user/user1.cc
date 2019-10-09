#include "user.ih"

User::User()
{                                           // Get user info from getpwent
    passwd pw = *getpwent();

    auto [d_name, passwd, d_realName, d_shell, d_groupId, d_homeDir, d_userId] = pw;
}
