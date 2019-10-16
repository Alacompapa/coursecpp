#include <iostream>
#include <string>

using namespace std;

extern char **environ;

int main(int argc, char *argv[])
{
    
    char **cpArgv = argv;                       // copy argv and argc
    argv = environ;                             // switch to where argv
    environ = cpArgv;                           // and environ point

    int envLen;
    for (envLen = 0; environ[envLen]; ++envLen)       // count nr elems environ
        continue;

    cout << "Environment variables:" << '\n';
    for (char **begin = argv, **end = argv + envLen; begin != end; ++begin)    // shows environment vars
        cout << *begin << '\n';

    cout << "Command line arguments:" << '\n';
    for (char **begin = environ, **end = environ + argc; begin != end; ++begin)  // shows cmd line args
        cout << *begin << '\n';
}
