#include "user.ih"

User::User()
{                                           // Get user info from getpwent
    auto [name, passwd, uid, gid, gecos, dir, shell] = *getpwent();

    d_name = name;                          // Initialize data members
    d_realName = gecos;
    d_shell = shell;
    d_groupId = gid;
    d_homeDir = dir;
    d_userId = uid;
}
