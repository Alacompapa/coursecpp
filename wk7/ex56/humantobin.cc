#include "main.ih"

void humanToBin(ifstream &infile, ofstream &outfile)
{
    // CREATE OVERHEAD
    char const overhead[] = "HUMANGENOME"; // NOTE(bb): define this in main.ih? to also use it in the other func
    outfile.write(overhead, sizeof(overhead));
    size_t paircount = 0; // NOTE: shouldnt paircount be called quadcount as we count per 4 letters
    outfile.write(reinterpret_cast<char const *>(&paircount), sizeof(size_t));

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
                buffer |= C; 
                break;
            case 'G':
                buffer |= G; 
                break;
            case 'T':
                buffer |= T; 
                break;
 //           default:
 //               return 1;     // cant return anything in void func
        }
        ++paircount;
        if (!(paircount % 4)) // NOTE(bb): whatabout paircount % 4 ?? then paircount can be 
                            //  a size_t
                            // if falsey buffer = 0, paircount doesnt have to 
                            //  be set 
                            // if truthy do nothing 
        {
            outfile << buffer;
            buffer = 0;
        }
    }

    if (paircount % 4)     // then here also paircount % 4 -> truthy do smthng 
        outfile << buffer;

    outfile.seekp(sizeof(overhead), ios::beg);
    outfile.write(reinterpret_cast<char const *>(&paircount), sizeof(size_t));
}
