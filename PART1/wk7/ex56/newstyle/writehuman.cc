#include "main.ih"

ReturnCodes writeHuman(istream &infile, ostream &outfile)
{                                   
                                    // our files have this header 
    char overhead[sizeof(data::overhead)];  
    infile.read(overhead, sizeof(data::overhead));
    for (size_t idx = 0; idx != sizeof(data::overhead); ++idx)
        if (overhead[idx] != data::overhead[idx])
            return WRONGHEADER;

    size_t lettercount = 0;         // header then contains lettercount            
    for (size_t idx = 0, tmpcount = 0; idx != sizeof(size_t); ++idx)
    {                               // read in little endian order bytes 
        tmpcount = infile.get();
        lettercount += (tmpcount << 8 * idx);
    }

    for (size_t idx = 0; idx != lettercount; ++idx) 
    {
        char letterquad;            // read per 4 letters (1 byte)
        if (!(idx % 4) and !infile.get(letterquad))   
            return WRONGHEADER; 

                                    // to read from right to left inside a byte 
                                    // we need this shift
        size_t shift = 6 - (idx % 4) * 2;
                                    // with shift we 'pick out' a certain
                                    // letter (bitpair) and isolate it
        unsigned char mask = 3 << shift;
        unsigned char base = (letterquad & mask) >> shift;

        writeLetter(outfile, base); // write letter to file
    }

    return NOERROR;
}
