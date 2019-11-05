#include "main.ih"

void humanToBin()
{
    ifstream infile{ "./dnahuman" };
    ofstream outfile{ "./dnabin" };

    enum BASES { A, C, G, T }; 

    unsigned char letter = 0;
    unsigned char paircount = 0;
    unsigned char buffer = 0;

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
            default:
                return 1;
        }
        ++paircount;
        if (paircount == 4)
        {
            outfile << buffer;
            paircount = 0;
            buffer = 0;
        }
    }

    if (paircount != 0)
        outfile << buffer;
}
