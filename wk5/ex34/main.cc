#include <iostream>
#include <string>

using namespace std;

extern char **environ;

int main(int argc, char *argv[])
{
    char **cpArgv = argv;                       // copy argv and argc
    int cpArgc = argc;

    for (argc = 0; environ[argc]; ++argc)       // count nr elems environ
        continue;

    argv = environ;                             // switch to where argv
    environ = cpArgv;                           // and environ point

    cout << "Environment variables:" << '\n';
    for (size_t idx = 0; idx != argc; ++idx)    // shows environment vars
        cout << argv[idx] << '\n';

    cout << "Command line arguments:" << '\n';
    for (size_t idx = 0; idx != cpArgc; ++idx)  // shows cmd line args
        cout << environ[idx] << '\n';
}
