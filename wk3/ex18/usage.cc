//                     usage.cc
namespace {
char const usageInfo[] = 
R"(
Should be called with appropriate arguments.
1st arg:    Number of the argument requested.
other args: Arguments which can be requested.
)";
}

#include "main.ih"

void usage(std::string const &progname)
{
    cout << usageInfo;
    /*
    cout << "\n" <<
    progname << " by " << Icmbuild::author << "\n" <<
    progname << " V" << Icmbuild::version << " " << Icmbuild::years << "\n"
    "\n"
    "Usage: " << progname << " [options] args\n"
    "Where:\n"
    "   [options] - optional arguments (short options between parentheses):\n"
    "      --help (-h)      - provide this help\n"
    "      --version (-v)   - show version information and terminate\n"
    "   args   - explain additional arguments.\n"
    "\n";
    */
}
