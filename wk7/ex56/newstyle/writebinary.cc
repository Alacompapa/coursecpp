#include "main.ih"

ReturnCodes writeBinary(istream &infile, ostream &outfile)
{
                                    // our files have this as header
    outfile.write(data::overhead, sizeof(data::overhead));
    size_t lettercount = 0;         // make room for a size_t in header
    outfile.write(reinterpret_cast<char const *>(&lettercount), sizeof(size_t));

    unsigned char letter = 0;
    unsigned char buffer = 0;
    while (infile >> letter)
    {
        buffer <<= 2;               // make room for next bitpair
        switch (letter)             // and place bitpair in buffer 
        {
            case 'A': 
                break;
            case 'C':
                buffer |= data::C; 
                break;
            case 'G':
                buffer |= data::G; 
                break;
            case 'T':
                buffer |= data::T; 
                break;
            default:
                return NOHUMAN;
        }
        ++lettercount;

        if (!(lettercount % 4))     // every 4 letters (1 byte) we write buffer
        {                           // and reset buffer for more letters 
            outfile << buffer;
            buffer = 0;
        }
    }

    if (lettercount % 4)            // any letter left in buffer? 
    {                               // place letter at right position in file
        buffer <<= (4 - (lettercount % 4)) * 2;            
        outfile << buffer;
    }

                                    // write lettercount in header
    outfile.seekp(sizeof(data::overhead), ios::beg);
    outfile.write(reinterpret_cast<char const *>(&lettercount), sizeof(size_t));

    return NOERROR;
}
