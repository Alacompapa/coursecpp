#include "main.ih"

int main(int argc, char **argv)
{
    ifstream infile;
    ofstream outfile;
    switch (option(argc, argv))
    {
        case data::HUMANTOBIN:
            infile.open(argv[1]); 
            outfile.open(argv[2]);
            return humanToBin(infile, outfile);
            break;
        case data::BINTOHUMAN:
            infile.open(argv[1]); 
            outfile.open(argv[2]);
            return binToHuman(infile, outfile);
            break;
        case data::USAGE:
        default:
            usage(argv[0]);
    }
}
