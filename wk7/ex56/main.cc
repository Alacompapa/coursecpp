#include "main.ih"

int main(int argc, char **argv)
{
    ifstream infile;
    ofstream outfile;
    switch (option(argc, argv))
    {
        case USAGE:
            usage(argv[0]);
            break;
        case HUMANTOBIN:
            infile.open(argv[1]); 
            outfile.open(argv[2]);
            humanToBin(infile, outfile);
            break;
        case BINTOHUMAN:
            infile.open(argv[1]); 
            outfile.open(argv[2]);
            binToHuman(infile, outfile);
            break;
    }
}
