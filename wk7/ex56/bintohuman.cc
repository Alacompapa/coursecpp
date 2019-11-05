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
    char paircount[sizeof(size_t)];
    infile.read(reinterpret_cast<char *>(&paircount), sizeof(size_t));
    cout << "paircount : " << setbase(16) << paircount << '\n';




    // ACA v ACAA problem
}
