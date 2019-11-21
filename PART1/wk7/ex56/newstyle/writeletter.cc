#include "main.ih"

void writeLetter(ostream &outfile, unsigned char base)
{
    switch (base)               // write letter to file
    {
        case data::A:
            outfile << 'A';
            break;
        case data::C:
            outfile << 'C';
            break;
        case data::G:
            outfile << 'G';
            break;
        case data::T:
            outfile << 'T';
            break;
    }
}
