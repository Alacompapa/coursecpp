#include "main.ih"

int main(int argc, char **argv)
{
    extern char **environ;
    size_t nIterate = stoul(argv[1]);
    bool copyOrMove = argc >= 3 ? false : true;
    Strings strings{ nIterate, copyOrMove };
    strings.iterate(environ);

/*    
    for (size_t idx = 0, end = strings.size();
            idx != end; ++idx)
        cout << "line " << idx + 1 << ": " << strings.at(idx) << '\n';
*/
}

/*
copy
./tmp/bin/binary 100  1.69s user 0.00s system 99% cpu 1.694 total
move
./tmp/bin/binary 100 1  0.27s user 0.08s system 99% cpu 0.344 total
*/
