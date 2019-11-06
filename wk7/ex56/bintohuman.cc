#include "main.ih"

void binToHuman(istream &infile, ostream &outfile)
{
    char overhead[12];
    infile.read(overhead, 12);
    // TODO: CHECK IF OVERHEAD == "HUMANGENOME"

    // NOTE(bb): this only works for little endian machines, we need a better 
    // solution
    size_t tmpcount = 0;
    size_t lettercount = 0;
    for (size_t idx = 0; idx != sizeof(size_t); ++idx)
    {
        tmpcount = infile.get();
        lettercount += (tmpcount << 8*idx);
    }


    for (size_t idx = 0; idx != lettercount; ++idx) // loop over every letter
    {
        char letterquad[1];
        if (!(idx % 4))
            infile.read(letterquad, 1);

        size_t shift = 6 - (idx % 4) * 2;

        unsigned char mask = 3 << shift;
        unsigned char base = (*letterquad & mask) >> shift;

        switch (base)
        {
            case Bases::A:
                outfile << 'A';
                break;
            case Bases::C:
                outfile << 'C';
                break;
            case Bases::G:
                outfile << 'G';
                break;
            case Bases::T:
                outfile << 'T';
                break;
        }
    }
}
