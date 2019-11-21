#include "main.ih"

int main(int argc, char **argv)
{
    User test;
    cout << test.valid() << '\n' <<
            test.groupId() << '\n' <<
            test.homeDir() << '\n' <<
            test.name() << '\n' <<
            test.realName() << '\n' <<
            test.shell() << '\n' <<
            test.userId() << '\n';
}
