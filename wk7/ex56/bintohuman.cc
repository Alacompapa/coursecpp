#include "main.ih"

void binToHuman(istream &infile, ostream &outfile)
{
    char overhead[12];
    infile.read(overhead, 12);
    // TODO: CHECK IF OVERHEAD == "HUMANGENOME"
//cout << "overhead : " << overhead << '\n'; 

    // NOTE(bb): this only works for little endian machines, we need a better 
    // solution
    size_t tmpcount = 0;
    size_t lettercount = 0;
    for (size_t idx = 0; idx != sizeof(size_t); ++idx)
    {
        tmpcount = infile.get();
        lettercount += (tmpcount << 8*idx);
    }
//cout << "lettercount : "  << setbase(16) << lettercount << '\n';


    for (size_t idx = 0; idx != lettercount; ++idx) // loop over every letter
    {
        char letterquad[1];
        if (!(idx % 4))
            infile.read(letterquad, 1);

//cout << "lq " << (int)*letterquad << '\n';

        size_t shift = 6 - (idx % 4) * 2;
//cout << "sh " << (int)shift << '\n';

        unsigned char mask = 3 << shift;
        unsigned char base = (*letterquad & mask) >> shift;
//cout << "ba " << (int)base << '\n';

        switch (base)
        {
            case Bases::A:
                outfile << 'A';
//cout << 'A';
                break;
            case Bases::C:
                outfile << 'C';
//cout << 'C';
                break;
            case Bases::G:
                outfile << 'G';
//cout << 'G';
                break;
            case Bases::T:
                outfile << 'T';
//cout << 'T';
                break;
        }
    }




    // ACA v ACAA problem
}
