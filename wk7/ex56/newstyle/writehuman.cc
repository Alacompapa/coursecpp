#include "main.ih"

// XXX: LONG
ReturnCodes writeHuman(istream &infile, ostream &outfile)
{
    char overhead[sizeof(data::overhead)];                  
    infile.read(overhead, sizeof(data::overhead));      // our files have this header
    for (size_t idx = 0; idx != sizeof(data::overhead); ++idx)
        if (overhead[idx] != data::overhead[idx])
            return NOHEADER;

    size_t lettercount = 0;         // header then contains lettercount            
    for (size_t idx = 0, tmpcount = 0; idx != sizeof(size_t); ++idx)
    {                               // read in little endian order bytes 
// XXX: STAR? 
        tmpcount = infile.get();
        lettercount += (tmpcount << 8 * idx);
    }


    for (size_t idx = 0; idx != lettercount; ++idx) 
    {
        char letterquad;            
        if (!(idx % 4))             // read per 4 letters (1 byte)
// XXX: check result
            infile.get(letterquad);

                                    // to read from right to left inside a byte 
                                    // we need this shift
        size_t shift = 6 - (idx % 4) * 2;
                                    // mask = 11 in binary
                                    // with shift we 'pick out' a certain
                                    // letter (bitpair) and isolate it as
                                    // a two-bit value
        unsigned char mask = 3 << shift;
        unsigned char base = (letterquad & mask) >> shift;

        writeLetter(outfile, base); // write letter to file
    }

    return NOERROR;
}
