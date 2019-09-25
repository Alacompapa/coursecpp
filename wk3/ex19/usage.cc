//                     usage.cc

#include "main.ih"

void usage(std::string const &progname)
{
    cout << "\n" <<
    progname << " by " << Icmbuild::author << "\n" <<
    progname << " V" << Icmbuild::version << " " << Icmbuild::years << "\n"
    "\n"
    "Usage: " << progname << " [options] args\n"
    "Where:\n"
    "   [options] - optional arguments (short options between parentheses):\n"
    "               at least one option must be given.\n"
    "   -c   - count characters in stream.\n"
    "   -w   - count words in stream.\n"
    "   -l   - count lines in stream.\n"
    "\n";
}
