#include "main.ih"

#include <iostream>
#include <iomanip>
void binToHuman(ifstream &infile, ofstream &outfile)
{
    // CHECK FOR OVERHEAD
    char overhead[12];
    infile.getline(overhead, 12, '\0');
    // CHECK IF OVERHEAD == "HUMANGENOME"
    cout << "overhead : " << overhead << '\n'; 

    char tmpcount = 0;
    size_t paircount = 0;
    for (size_t idx = 0; idx != sizeof(size_t); ++idx)
    {
        infile >> tmpcount;
        paircount += (tmpcount << 8*idx);
    }
    cout << "paircount : " << setbase(16) << paircount << '\n';
    // 9b 0a
    // 1001 1011 - 0000 1010
    // we want
    // 0000 1010 1001 1011



    // ACA v ACAA problem
}
