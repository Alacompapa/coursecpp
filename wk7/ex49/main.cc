#include <iostream>

using namespace std;

// Internally, the insertion operator accesses the output sequence by first constructing a sentry object, then performing the formatting and insertion operations, then setting the internal state flags, s and then destroys the object before returning.
// By first checking if failbit is set, we can bypass this object entirely, which saves on execution time

// Rule of thumb:
// The insertion operator's failbit is useful for not inserting sequences to an output stream. If the insertion operator has to be called a large amount of times on the same stream, including an if-statement to check for the failbit before using the insertion operator increases performance significantly.

int main(int argc, char *argv[])
{
    if (argc < 2)
        return 1;
    else {
        std::ostream out(std::cout.rdbuf());
        out.setstate(ios::failbit);

        for (size_t count = 0; count < stoul(argv[1]); ++count) {
            if (out.good())
                out << "Yes";
        }
    }
}
