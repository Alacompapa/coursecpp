#include "main.ih"

void humanToBin(ifstream &infile, ofstream &outfile)
{
    // CREATE OVERHEAD
    char const overhead[] = "HUMANGENOME"; // NOTE(bb): define this in main.ih? to also use it in the other func
    outfile.write(overhead, sizeof(overhead));
    size_t lettercount = 0; // NOTE: shouldnt lettercount be called quadcount as we count per 4 letters
    outfile.write(reinterpret_cast<char const *>(&lettercount), sizeof(size_t));

    unsigned char letter = 0;
    unsigned char buffer = 0;
    // TODO: CHECK FOR LETTERS (human readable can only contain letters!!!!)
    while (infile >> letter)
    {
        buffer <<= 2;
        switch (letter)
        {
            case 'A': // bij A hoeft je niks te doen
                break;
            case 'C':
                buffer |= BASES::C; 
                break;
            case 'G':
                buffer |= BASES::G; 
                break;
            case 'T':
                buffer |= BASES::T; 
                break;
 //           default:
 //               return 1;     // cant return anything in void func
        }
        ++lettercount;
        if (!(lettercount % 4)) // NOTE(bb): whatabout lettercount % 4 ?? then lettercount can be 
                            //  a size_t
                            // if falsey buffer = 0, lettercount doesnt have to 
                            //  be set 
                            // if truthy do nothing 
        {
            outfile << buffer;
            buffer = 0;
        }
    }

    if (lettercount % 4)     // then here also lettercount % 4 -> truthy do smthng 
    {
        buffer <<= (4 - (lettercount % 4)) * 2;            // to make sure letters written at right position
        outfile << buffer;
    }

    outfile.seekp(sizeof(overhead), ios::beg);
    outfile.write(reinterpret_cast<char const *>(&lettercount), sizeof(size_t));
}
