#include "main.ih"

int main(int argc, char **argv)
{
    ifstream infile;
    ofstream outfile;
    switch (option(argc, argv))     // determine arguments
    {
        case data::HUMANTOBIN:      // human input -> binary output
            infile.open(argv[1]); 
            outfile.open(argv[2]);
            return humanToBin(infile, outfile);
            break;
        case data::BINTOHUMAN:      // binary input -> human output
            infile.open(argv[1]); 
            outfile.open(argv[2]);
            return binToHuman(infile, outfile);
            break;
        case data::USAGE:           // unrecognized arguments
        default:
            usage(argv[0]);
    }
}
