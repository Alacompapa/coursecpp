#include "user.h"

using namespace std;

User::User()
{                                           // Get user info from getpwent
    auto [name, passwd, uid, gid, gecos, dir, shell] = *getpwent();
    
    d_name = name;
    d_realName = gecos;
    d_shell = shell;
    d_groupId = gid;
    d_userId = uid;
}
