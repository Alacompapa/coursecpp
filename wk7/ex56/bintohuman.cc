#include "main.ih"

#include <iostream>
#include <iomanip>
void binToHuman(ifstream &infile, ofstream &outfile)
{
    char overhead[12];
    infile.read(overhead, 12);
    // TODO: CHECK IF OVERHEAD == "HUMANGENOME"
    cout << "overhead : " << overhead << '\n'; 

    // NOTE(bb): this only works for a certain endianness, we need a better 
    // solution
    size_t tmpcount = 0;
    size_t paircount = 0;
    for (size_t idx = 0; idx != sizeof(size_t); ++idx)
    {
        tmpcount = infile.get();
        paircount += (tmpcount << 8*idx);
    }
    cout << "paircount : "  << setbase(16) << paircount << '\n';





    // ACA v ACAA problem
}
