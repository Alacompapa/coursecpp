#include "main.ih"

int main(int argc, char **argv)
{
    auto [n,p,u,g,gec,dir,sh] = *getpwent();

    cout << n << '\n';
    cout << p << '\n';
    cout << u << '\n';
    cout << g << '\n';
    cout << gec << '\n';
    cout << dir << '\n';
    cout << sh << '\n';

    cout << getpwent()->pw_name << '\n';
    cout << getpwent()->pw_passwd << '\n';
    cout << getpwent()->pw_uid << '\n';
    cout << getpwent()->pw_gid << '\n';
    cout << getpwent()->pw_gecos << '\n';
    cout << getpwent()->pw_dir << '\n';
    cout << getpwent()->pw_shell << '\n';
}
