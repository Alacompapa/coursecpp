#include <iostream>

using namespace std;

// The insertion operator is a function call, therefore a stack frame will be created and filled with the arguments of the call. Then the ostream class has a member class sentry of which an object is created before (and after) each output operation. This object then checks for the goodbit of the ostream. After the operation the sentry object is destroyed.

// In summary if we don't bypass the insertion operation (by not adding the if statement), a stack frame is created and filled, an object is created, the object calls a function and the object is destroyed.
// This all takes time. Not much time but when we do a large number of repetitions this adds up.

// Rule of thumb:
// The insertion operator's failbit is useful for not inserting sequences to an output stream. If the insertion operator has to be called a large amount of times on the same stream, you can increase performance significantly by including an if-statement to check for the failbit before using the insertion operator .

int main(int argc, char **argv)
{
    if (argc < 2)                       // not enough arguments
        return 1;

    ostream out(cout.rdbuf());
    out.setstate(ios::failbit);

    for (size_t count = 0; count != stoul(argv[1]); ++count)
      if (out.good())
    		out << "Nr. of command line arguments " << argc << '\n';
}
