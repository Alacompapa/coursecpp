#include "user.ih"

User::User()
{                                           // Get user info from getpwent
    passwd *pw = getpwent();

    if (pw == 0)                            // check if getpwent returned
        d_valid = false;                    // any values
    else
    {
        d_valid = true;
        d_name = pw->pw_name;
        d_realName = pw->pw_gecos;
        d_shell = pw->pw_shell;
        d_groupId = pw->pw_gid;
        d_homeDir = pw->pw_dir;
        d_userId = pw->pw_uid;
    }
}
