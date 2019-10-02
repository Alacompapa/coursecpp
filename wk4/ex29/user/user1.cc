#include "user.ih"

using namespace std;

User::User()
{                                           // Get user info from getpwent
    auto [name, passwd, uid, gid, gecos, dir, shell] = *getpwent();
    
    d_name = name;
    d_realName = gecos;
    d_shell = shell;
    d_groupId = gid;
    d_userId = uid;

    cout << "Constructor User::User() called \n";

    cout << d_name << '\n';
    cout << d_realName << '\n';
    cout << d_shell << '\n';
    cout << d_groupId << '\n';
    cout << d_userId << '\n';
}
