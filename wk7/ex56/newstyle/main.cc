#include "main.ih"

int main(int argc, char **argv)
{
    ifstream infile;
    ofstream outfile;
    switch (option(argc, argv))     // determine arguments
    {
// XXX: cases where both in and out are HR/bin
        case data::WRITEBINARY:        // human input -> binary output
            infile.open(argv[1]); 
            outfile.open(argv[2]);
            return writeBinary(infile, outfile);
            break;
        case data::WRITEHUMAN:      // binary input -> human output
            infile.open(argv[1]); 
            outfile.open(argv[2]);
            return writeHuman(infile, outfile);
            break;
        case data::USAGE:           // unrecognized arguments
        default:
            usage(argv[0]);
    }
}
