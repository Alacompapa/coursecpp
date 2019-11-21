#include <iostream>

using namespace std;

extern char **environ;

int main(int argc, char *argv[])
{
    int envLen = 0;
    for (; environ[envLen]; ++envLen)           // count nr elems environ
        continue;

    char **cpArgv = argv;                       // copy argv and argc
    argv = environ;                             // switch to where argv
    environ = cpArgv;                           // and environ point

    cout << "Environment variables:" << '\n';   // shows environment vars
    for (char **begin = argv, **end = argv + envLen; begin != end; ++begin)    
        cout << *begin << '\n';

    cout << "Command line arguments:" << '\n';  // shows cmd line args
    for (char **begin = environ, **end = environ + argc; begin != end; ++begin)  
        cout << *begin << '\n';
}
