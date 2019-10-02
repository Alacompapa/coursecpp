#include "user.h"

using namespace std;

User::User()
{                                           // Get user info
    auto [name, passwd, uid, gid, gecos, dir, shell] = *getpwent();

}
