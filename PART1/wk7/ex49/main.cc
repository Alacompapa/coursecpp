#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    if (argc < 2)                       // not enough arguments
        return 1;

    ostream out(cout.rdbuf());          // initalize out with couts buffer
    out.setstate(ios::failbit);         // raise outs failbit

    for (size_t count = 0; count != stoul(argv[1]); ++count)
      if (out.good())
    		out << "Nr. of command line arguments " << argc << '\n';
}
